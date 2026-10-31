# Instructions

Update this document where indicated [look for the brackets!]. Replace text inside the brackets with your own information. For example: Course Name should be the name of this course, and not the generic words "Course Name".


## [ Project and Portfolio 1: COS119-0 01 ]

- **[ Christina Coursey ]**
- **[ November 1st, 2026]**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

- [ clear ]: Clear the Screen
- [pwd]: Print the "Working Directory"
- [ ls ]: List files and folders
- [ ls -a ]: List files and folders, including invisible files
- [ ls -lah ]: List all files and folders, in human readable form
- [ cd foldername ]: Change directory
- [ cd / ]: Change directory, go to root directory
- [ cd ~ ]: Change directory and go to user home directory
- [ cd .. ]: Change directory, go up one folder level
- [cd ../.. ]: Change directory, go up two folder levels
- [ cd ~/Desktop ]: Change directory to my desktop!

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

[ When I typed cd followed by a space and dragged a folder into the terminal, the folder's full path automatically appeared in the command line. After I pressed enter, the Terminal changed its working directory to that folder.  ]

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git. Update the information below where indicated.

**1. There are three types of version control.**

[ 1. Local Version Control stores changes and different versions of files on one computer. this allows you to go back to an earlier version if needed. 
2. Centralized Version Control stores files and their revision history on one central server. Multiple developers connect to that server to work on the same project.
3.  Distributed Version Control-- Gives each developer a complete copy of the repository and its history. Developers can work independently and share their changes with others.]

**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.

- [ git clone repository-url]: Clone a repository
- [ git config --global user.name": ]: Set-up a global user name
- [git config -- global user.email "your-email@example.com" ]: Set-up a global email address (to match my GitHub account email)
- [ git status]: Shows the current state of your directory and staging area
- [ git add]: Add modified files to the next commit
- [ git commit -m "your commit message"]: Make a commit with a new message
- [ git log ]: Show my commit history
- [ git help]: Show Git's help screen

**3. Connecting to GitHub using Terminal.**
HTTPS is the the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

[ To connect to GitHub using HTTPS, I open my repository on GitHub and click the green code button. I select HTTPS and copied the repository URL. In Git bash, I navigated to the folder where I wanted to store the repository. I entered "git clone" followed by the HTTPS URL and pressed enter. Git downloads a local copy of the repository to my computer. If authentication is required, I would sign in using GitHub's supported authentication method, but that was not needed.]

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

- What is the purpose of this file?
  
  [.gitignore file tells Git which files and folders it should ignore instead of tracking or including them in commits. This helps keep unnecessary files out of the repository.

- What is the "**.DS_Store**" file and why would you want to ignore it?
  
  [ .DS_Store file is automatically created by macOS to store folder display settings, such as icon positions and viewing preferences. It should be ignored because it is specific to a user's computer and does not contain important project information. Keeping it out of Git prevents unnecessary files from being added to the repository]

- What other file or folder would you want to add to a .gitignore file and why?

  [I would add the bin/ and obj/ folders to the .gitignore file. These folders contain complied program files and temporary build files created by the development environment.] 



# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

[The most helpful resources were the official Git and GitHub documentation because they explained how to use Terminal commands, manage repositories, and connect to 
GitHub using HTTPS. I also learned how different types of version control work and why .gitignore files are important. These resources helped me to understand how developers organize their project and keep track of their changes.]

**Terminal Commands**  
https://www.gnu.org/software/coreutils/manual/coreutils.html

https://www.gnu.org/software/bash/manual/bash.html
**Three Types of Version Control**  
https://developer.cisco.com/docs/nx-os/why-version-control/

**Git Commands**  
[https://git-scm.com/docs

https://docs.github.com/en/get-started/using-git/about-git
**Connecting to GitHub using Terminal**  
https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository

**Using .gitignore and Why it's Important**
https://docs.github.com/en/get-started/git-basics/ignoring-files

https://git-scm.com/docs/gitignore