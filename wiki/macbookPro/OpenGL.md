Need to download GLUI.framework:

https://lukecyca.com/2008/glui-235-framework-for-mac-os-x.html

then,

~~~~
#include <OpenGL/OpenGL.h> 
#include <OpenGL/gl.h> 
#include <OpenGL/glu.h> 
#include <OpenGL/glext.h> 
#include <GLUT/glut.h> 
#include <GLUI/glui.h> 
#include <OpenCL/cl_gl.h> 
#include <OpenCL/cl_gl_ext.h>
~~~~

Then compile with additional options:

`-framework OpenGL -framework GLUT -framework GLUI`

Also replace a few lines:

~~~~
// 3. create an opencl context based on the opengl context:

  #if defined(_WIN32)

      // Windows
      cl_context_properties props[] = {
        CL_GL_CONTEXT_KHR, (cl_context_properties)wglGetCurrentContext(),
        CL_WGL_HDC_KHR, (cl_context_properties)wglGetCurrentDC(),
        CL_CONTEXT_PLATFORM, (cl_context_properties)platform,
        0
      };

  #elif defined(__APPLE__)

      // OS X
      CGLContextObj     kCGLContext     = CGLGetCurrentContext();
      CGLShareGroupObj  kCGLShareGroup  = CGLGetShareGroup(kCGLContext);

      cl_context_properties props[] = {
        CL_CONTEXT_PROPERTY_USE_CGL_SHAREGROUP_APPLE,
        (cl_context_properties) kCGLShareGroup,
        0
      };

  #else

      // Linux
      cl_context_properties props[] = {
        CL_GL_CONTEXT_KHR, (cl_context_properties)glXGetCurrentContext(),
        CL_GLX_DISPLAY_KHR, (cl_context_properties)glXGetCurrentDisplay(),
        CL_CONTEXT_PLATFORM, (cl_context_properties)platform,
        0
      };

  #endif
~~~~

Also replace some lines with:

~~~~
  #if defined(__APPLE__)
  if(  IsCLExtensionSupported( "cl_APPLE_gl_sharing" )  ) {
  const char *cl_gl_sharing_extension = "cl_APPLE_gl_sharing";
    fprintf( stderr, "cl_APPLE_gl_sharing is supported.\n" );
  } else {
    fprintf( stderr, "cl_APPLE_gl_sharing is not supported -- sorry.\n" );
    return;
  }
  #else
  if(  IsCLExtensionSupported( "cl_khr_gl_sharing" )  ) {
    fprintf( stderr, "cl_khr_gl_sharing is supported.\n" );
  } else {
    fprintf( stderr, "cl_khr_gl_sharing is not supported -- sorry.\n" );
    return;
  }
  const char *cl_gl_sharing_extension = "cl_khr_gl_sharing";
  #endif
~~~~
