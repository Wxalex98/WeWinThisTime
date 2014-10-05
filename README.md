WeWinThisTime
=============================

¡¡Que Letona no nos castre!!

<b>Repository Harmonices Mundi</b>

Estrategia
=============
CORONASPHERES

1) HACER FOTOS hasta T segundos antes de la llamarada.

2) ESCONDERSE Y ESPERAR a la llamarada.

Links:

Game manual: http://static.zerorobotics.mit.edu/docs/hs/CoronaSPHERES_Manual_v2.0.pdf

Tournament: http://zerorobotics.mit.edu/tournaments/16/

Zero Robotics tutorials: http://zerorobotics.mit.edu/tutorials/


GitHub
==============

As you should already know, we have chosen to write code through this page rather than using the official IDE provided by Zero Robotics. You may ask, why so? To answer your curiosity, I will simply invite you to try and edit a snippet of code in ZR IDE while one of your fellow companions is already working on it. Can you see the multiple errors popping out of nowhere? Yes? Well, that's your reason to change to GitHub.

What is Github? GitHub is a platform developed to help open source programmers to coordinate their efforts and write code together. To do so it employs Git, a VCS (Version Control System) software which keeps track of the changes made to the repository by every developer collaborating in a proyect. This enables programmers to work with no fear of getting in the way of other collaborators, unlike in the unfortunately not team friendly ZR IDE.

Using GitHub


Before you continue reading, I invite you to create an account in GitHub.

Ready? Then look carefully at the buttons shown over this file.

+Edit: Press Edit to fork the proyect and create a new version of the file, which you can submit after as a pull request.

+Raw: Clicking on Raw will return you a text-only page ready to copy-paste into the ZR IDE simulator.

+Blame: Blame will show you the file divided in sections, each of this sections along with the name of the editor who wrote the section and the date.

+History: History contains every single version made of the file, along with its editor.

Editing, editing
To allow multiple coders work on the same project and even on the same file at the same time Github implements a thing that is called 'branch', a branch is an alternative version of a project, it starts being an exact copy of the current state of the project but then they can be edited.

Let's give an example. Alice and Bert are programming the SPHERES and they share their work: Alice focuses on picking up items and Bert focuses on shooting the comet.

Most of the time Alice and Bert dont interfiere on the other's work because they are editing different files with one exception: the code that is on main. Both of them need to edit main to get their function called there.

How branches can save your day
If Alice and Bert used branches there wouldn't be any problem. Alice would have created a branch called 'item-picking' and Bert would had created a branch called 'shoot-laser'. When they were finished they would have done a 'merge'(that's the fusion of two branches) and Github would have combined their changes into only one branch.

Workflow
Find a task If you are willing to do something take a look to the issues posted on the issues section(you can go there using that exclamation on the right) and read the open issues. Fid something that fits you and post a comment on it telling everyone that you are going to work on that. If you dont find any issue you can also create a new one proposing a improvement to the strategy or to the code. If you end up creating a new issue please be clear and descriptive while explaining what the problem or the improvement is.

Open a new branch If you want to edit some part of the code please dont do it directly, first create a new branch. To do that you need to go to the project page and click on the branch selector(that button that says 'branch: master') and write your branch name(please make it related with the issue).

Cook the code After doing this you are free of doing whatever modifications are needed, only enter into a code file and click 'Edit' then do the modifcation, test it on the ZR IDE and write down a description of the modification and click 'Commit'. You can do that everytime you need to save your progress.

Merging your branch Whenever you have solve the problem go to the project page and click on the green button with two arrows, that button stands for 'Pull request' and by clicking it, writing a description of your solution and confirming it you will make a request saying that your code is finished and you want your code to be added to the general code. Someone will review the code and give it green light. Then your code will be seen by everyone in the frontpage of the project.
