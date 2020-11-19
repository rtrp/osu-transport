# Creating a personal RTRP page

1.  Create a GitHub account.

2.  Create a personal fork of the repository at https://github.com/rtrp/osu-transport. The fork button is in the upper-right corner.

3.  Clone your personal fork of the repository onto your local machine. Be sure to insert your GitHub username.

    ```git clone https://github.com/<your-github-username>/osu-transport.git```
    
* Don't want to enter your password when iteracting with Git commands? Look into setting up an SSH keypair on your account.
    
    
4.  Navigate to ```osu-transport``` and set up a remote that's looking at the main RTRP repository. 

    ```git remote add upstream https://github.com/rtrp/osu-transport```
    
* In the future, this command can be used to pull in changes from the upstream repository:

    ```git pull upstream gh-pages```

5.  Navigate to ```osu-transport/users``` and create a directory bearing your name. Note: don't actually call it ```myDirectory```.

    ```mkdir myDirectory```
    
6.  In your directory, create an ```index.md``` file and populate it with the information you want people to know about you. You can look at others' pages for ideas. Look up information on Markdown to find out how to insert images, format text, and create lists. A basic starting point is given below.

    ```
    ---
    title: myName-personal
    layout: default
    author: myName
    ---
    # myName
    --------------
    Here's some information on me.
    ```
    
    
7.  Add your directory so Git knows to keep track of the files there. 

    ```git add myDirectory```

8.  Add a link to your newly created page to ```osu-transport/index.html```. Add this under the appropriate category, replacing ```myDirectory```, ```myFullName```, and ```myGitName``` with the appropriate information. 

    ```<li><a href="{{ site.url }}users/myDirectory/">myFullName</a> (<a href="https://github.com/myGitName" class="user-mention">@myGitName</a>)</li> ```
    
9. Navigate to the top of the repository (```osu-transport```) and check to see what files have been modified and/or created.

    ```git status```

10. Stage the files that have been modified and/or created which you want to be incorporated into the RTRP webpage. 

    ```git add pathTo/file```
    
*  Alternatively, if you want to incorporate ALL the    modified and/or created files, you can do ```git add *```. This is quicker, but is not the best habit to get into. You might accidentally add an unwanted file by mistake.

    
11.  Commit the changes you've made. Be sure to write an informative, but brief, commit message.

     ```git commit```
      
12.  Push your changes up to your personal fork on GitHub.

     ```git push```
     
13.  Inspect the changes you've made by navigating to your personal fork of the RTRP webpage. For example, if my GitHub name is ```myGitName```, and I want to look at my personal page, which is contained within ```myDirectory```, I would go to the following link in my web browser.  

     ```https://myGitName.github.io/osu-transport/users/myDirectory/```
  
*  Note that if you're making a number of changes quickly, it may take some time for the webpage to update. You may also need to browse in private mode to avoid using an old cached version of the webpage.
    
*  If you're unsatisfied with the changes you've made, continue modifying your ```index.md``` file and repeating steps 9-13.

14.  Once you're satisfied with your changes, create a pull request from your personal fork. The RTRP GitHub admins will review your changes, and then merge them into the main repository at ```rtrp/osu-transport```. 
