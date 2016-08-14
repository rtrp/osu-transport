~~~~
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#ifdef WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

// vendor ids:

#define ID_AMD		0x1002
#define ID_INTEL	0x8086
#define ID_NVIDIA	0x10de


#include "OpenCL/cl.h"

int
main( int argc, char *argv[ ] )
{

	cl_int status;		// returned status from opencl calls
						// test against CL_SUCCESS

	// find out how many platforms are attached here and get their ids:

	cl_uint numPlatforms;
	status = clGetPlatformIDs( 0, NULL, &numPlatforms );
	if( status != CL_SUCCESS )
		fprintf( stderr, "clGetPlatformIDs failed (1)\n" );

	fprintf( stderr, "Number of Platforms = %d\n", numPlatforms );

	cl_platform_id *platforms = new cl_platform_id[ numPlatforms ];
	status = clGetPlatformIDs( numPlatforms, platforms, NULL );
	if( status != CL_SUCCESS )
		fprintf( stderr, "clGetPlatformIDs failed (2)\n" );

	cl_uint numDevices;
	cl_device_id *devices;

	for( int i = 0; i < (int)numPlatforms; i++ )
	{
		fprintf( stderr, "Platform #%d:\n", i );
		size_t size;
		char *str;

		clGetPlatformInfo( platforms[i], CL_PLATFORM_NAME, 0, NULL, &size );
		str = new char [ size ];
		clGetPlatformInfo( platforms[i], CL_PLATFORM_NAME, size, str, NULL );
		fprintf( stderr, "\tName    = '%s'\n", str );
		delete[ ] str;

		clGetPlatformInfo( platforms[i], CL_PLATFORM_VENDOR, 0, NULL, &size );
		str = new char [ size ];
		clGetPlatformInfo( platforms[i], CL_PLATFORM_VENDOR, size, str, NULL );
		fprintf( stderr, "\tVendor  = '%s'\n", str );
		delete[ ] str;

		clGetPlatformInfo( platforms[i], CL_PLATFORM_VERSION, 0, NULL, &size );
		str = new char [ size ];
		clGetPlatformInfo( platforms[i], CL_PLATFORM_VERSION, size, str, NULL );
		fprintf( stderr, "\tVersion = '%s'\n", str );
		delete[ ] str;

		clGetPlatformInfo( platforms[i], CL_PLATFORM_PROFILE, 0, NULL, &size );
		str = new char [ size ];
		clGetPlatformInfo( platforms[i], CL_PLATFORM_PROFILE, size, str, NULL );
		fprintf( stderr, "\tProfile = '%s'\n", str );
		delete[ ] str;


		// find out how many devices are attached to each platform and get their ids:

		status = clGetDeviceIDs( platforms[i], CL_DEVICE_TYPE_ALL, 0, NULL, &numDevices );
		if( status != CL_SUCCESS )
			fprintf( stderr, "clGetDeviceIDs failed (2)\n" );

		fprintf( stderr, "\tNumber of Devices = %d\n", numDevices );

		devices = new cl_device_id[ numDevices ];
		status = clGetDeviceIDs( platforms[i], CL_DEVICE_TYPE_ALL, numDevices, devices, NULL );
		if( status != CL_SUCCESS )
			fprintf( stderr, "clGetDeviceIDs failed (2)\n" );

		for( int j = 0; j < (int)numDevices; j++ )
		{
			fprintf( stderr, "\tDevice #%d:\n", j );
			size_t size;
			cl_device_type type;
			cl_uint ui;
			size_t sizes[3] = { 0, 0, 0 };

			clGetDeviceInfo( devices[j], CL_DEVICE_TYPE, sizeof(type), &type, NULL );
			fprintf( stderr, "\t\tType = 0x%04x = ", type );
			switch( type )
			{
				case CL_DEVICE_TYPE_CPU:
					fprintf( stderr, "CL_DEVICE_TYPE_CPU\n" );
					break;
				case CL_DEVICE_TYPE_GPU:
					fprintf( stderr, "CL_DEVICE_TYPE_GPU\n" );
					break;
				case CL_DEVICE_TYPE_ACCELERATOR:
					fprintf( stderr, "CL_DEVICE_TYPE_ACCELERATOR\n" );
					break;
				default:
					fprintf( stderr, "Other...\n" );
					break;
			}

			clGetDeviceInfo( devices[j], CL_DEVICE_VENDOR_ID, sizeof(ui), &ui, NULL );
			fprintf( stderr, "\t\tDevice Vendor ID = 0x%04x ", ui );
			switch( ui )
			{
				case ID_AMD:
					fprintf( stderr, "(AMD)\n" );
					break;
				case ID_INTEL:
					fprintf( stderr, "(Intel)\n" );
					break;
				case ID_NVIDIA:
					fprintf( stderr, "(NVIDIA)\n" );
					break;
				default:
					fprintf( stderr, "(?)\n" );
			}

			clGetDeviceInfo( devices[j], CL_DEVICE_MAX_COMPUTE_UNITS, sizeof(ui), &ui, NULL );
			fprintf( stderr, "\t\tDevice Maximum Compute Units = %d\n", ui );

			clGetDeviceInfo( devices[j], CL_DEVICE_MAX_WORK_ITEM_DIMENSIONS, sizeof(ui), &ui, NULL );
			fprintf( stderr, "\t\tDevice Maximum Work Item Dimensions = %d\n", ui );

			clGetDeviceInfo( devices[j], CL_DEVICE_MAX_WORK_ITEM_SIZES, sizeof(sizes), sizes, NULL );
			fprintf( stderr, "\t\tDevice Maximum Work Item Sizes = %d x %d x %d\n", sizes[0], sizes[1], sizes[2] );

			clGetDeviceInfo( devices[j], CL_DEVICE_MAX_WORK_GROUP_SIZE, sizeof(size), &size, NULL );
			fprintf( stderr, "\t\tDevice Maximum Work Group Size = %d\n", size );

			clGetDeviceInfo( devices[j], CL_DEVICE_MAX_CLOCK_FREQUENCY, sizeof(ui), &ui, NULL );
			fprintf( stderr, "\t\tDevice Maximum Clock Frequency = %d MHz\n", ui );
		}
	}

	// get information on extensions:

	size_t extensionSize;
	clGetDeviceInfo( devices[0], CL_DEVICE_EXTENSIONS, 0, NULL, &extensionSize );
	char *extensions = new char [extensionSize];
	clGetDeviceInfo( devices[0], CL_DEVICE_EXTENSIONS, extensionSize, extensions, NULL );
	fprintf( stderr, "\nDevice Extensions:\n" );
	for( int i = 0; i < (int)strlen(extensions); i++ )
	{
		if( extensions[i] == ' ' )
			extensions[i] = '\n';
	}
	fprintf( stderr, "%s\n", extensions );
	delete [ ] extensions;

	// clean everything up:

	delete [ ] platforms;
	delete [ ] devices;

	//Sleep( 5000 );
	return 0;
}
~~~~
