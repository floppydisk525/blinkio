This file is to record git notes for moving around git. 

------------------------------ COMMIT ------------------------  
Before COMMIT, you must ADD  

To ADD a file to local repository:  
git add gitnotes.txt

Check status:  
git status

COMMIT Added file from above (no need to mention name because the 'add' puts teh file in the staging folder)  
Note that the -m is for including a message:  
git commit -m 'add git notes to repository'

another way to commit 'all'  
git commit -a -m 'made a change'

----------------------------- BRANCHING ----------------------  
1. Create a branch (doesn't automatically change to branch)  
git branch testing   

2. checkout branch  
git checkout testing

3. To do both above in one command:  
git checkout -b testing

---------------------------  PUSH  ---------------------------  
The initial push was done w/ the following commands:  
git remote add origin https://github.com/floppydisk525/blinkio.git  
git push -u origin master  

push a branch named blinktime  
git push origin blinktime 

push the master  
git push origin master

NOTE:  origin is the github 'online' remote repository.    

-------------------------------- LOG -------------------------  
git log --oneline --decorate  

----------------- [GIT CHANGES FROM MASTER TO BRANCH](https://stackoverflow.com/questions/5340724/get-changes-from-master-into-branch-in-git) -----------  
git checkout _<branch>_  
git merge origin/master

------------------------- CLONE A REPOSITORY ------------------  
git clone ssh://john@example.com/path/to/my-project.git  
cd my-project  
# Start working on the project  
From here: https://www.atlassian.com/git/tutorials/setting-up-a-repository/git-clone

--------------- DIFF TWO FILES FROM TWO DIFFERENT BRANCHES ----  
git diff mybranch master -- myfile.cs

------------------------ COMPILE C CODE EXAMPLE ---------------  
cd examples/blink  
gcc -o blink -l rt blink.c -l bcm2835   

And then run the blink exe with this command:  
sudo ./blink  
If you connect the positive pin of a 5V LED to pin 11 of the P1 header it should be blinking.  

Use CTRL+Break or CTRL+SHIFT+C to stop the exe.  

