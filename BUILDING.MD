This build setup will use a service called 'AppVeyor' which is (currently) free for our purposes and does all the things it needs to do.
This negates the need for a local development environment or installing Visual Studio/dependencies/python or any of that nonsense.

This guide is as simple as possible from a non-technical point of view.
You will need a modern web browser and a text editor of your choice.  I recommend Notepad++ but use whatever you like as long as it isn't Microsoft Notepad/Wordpad.

OPTIONAL is if you want to do things yourself instead of downloading/using my files.
If it makes it easier to read, just download this file and delete all the 'OPTIONAL' stuff :)



1 - Sign up for a Github account.  You'll use this for both Github and Appveyor so no need to make multiple accounts!

2 - Login to Github and go to this URL: https://github.com/maxim-zhao/psrp

3 - In the upper right corner click the 'Fork' button.

4 - Delete the existing appveyor.yml by clicking the 'Trash' icon in the upper right of that window.

5 - You can download my appveyor.yml file and upload it to the 'Home' repository directory with the ReadMe visible or edit it yourself
Download: https://github.com/Daedalus007/psrp-daedalus/blob/master/appveyor.yml

OPTIONAL -- Edits to appveyor.yml to do yourself:
	
	Change Line 9 to this
	secure: f4DzuARrHNBCCfE+ps9Y5iPSbaIn5S7PLkz6ATiLSYnYUea+L/ddEmuPLLJ/i1Re
	
	Change Line 17 to this
	7z x ps1jp.zip -opsrp
	
OPTIONAL -- I would recommend editing titlescreen.en.png (psrp/psrp/new_graphics/) so that people know you modded it.  DO NOT USE MSPAINT because it will mess up the palette, use GIMP or another dedicated image editor.

6 - Go to the following path: (psrp/psrp/) by clicking on the 'psrp' folder from the main 'home' repository page.  The 'home' page has the full ReadMe displayed.
You can use my edited 'makefile' or edit it yourself.
Download: https://github.com/Daedalus007/psrp-daedalus/blob/master/psrp/makefile

OPTIONAL -- Edits to 'makefile' to do yourself:

	Change Line 15 to this
	PSJ = psjapa.sms

6 - Go to the following path: (psrp/psrp/) by clicking on the 'psrp' folder from the main 'home' repository page.  The 'home' page has the full ReadMe displayed.
You want to edit the 'ps1jert.sms.asm' file by downloading, deleting the original from your repository, then re-uploading your edited version.

Here is a **mandatory edit** you must do to the 'ps1jert.sms.asm' file:

	Change Line 19 to this
	.define ORIGINAL_ROM "PSJAPA.SMS"

8 - As far as your personal editing, that depends on what you want to accomplish.  For simple text edits, these are the files you want to edit.  You can use the Github editor but it is far easier to download the files and edit them in a dedicated text editor with find/replace and other features.
It is easy to edit charater names, item names, spell names, and so on.  Anything beyond that is beyond the scope of this guide.

	menus.yaml = Game menus and functionality
	ps1jert.sms.asm = The entire game's assembly code
	script.yaml = The entire game's script

9 - If you edited using the built-in Github editor then just 'Commit' your changes (Green Button) when you are done.  If you downloaded the files then you'll want to delete the originals (trash can icon) from the repository before uploading your replacements.  Make sure you are in the proper path and then use the 'Add File -> Upload Files' functionality to upload the downloaded ones that you edited locally on your computer.  Delete & replace is safer than just replacing depending on your setup.  I always would rather choose the SAFER option to make 100% certain my new files are being used.

10 - Now you are ready to build!  Go to https://www.appveyor.com/ and click 'Sign In' in the upper-right corner.  On the Login screen click the Blue 'Github' button on the upper left side.  It may also ask to 'Install' Appveyor as a Github App.  Accept the permissions.

11 - You are on the main build screen.  Click the Blue plus (+) sign button that says 'New Project'.  At this point it will show the Github repository that you just forked and modified.  Hover over the project name and then another blue 'Add' button will appear.  Click that button.

12 - You should be back on the 'Projects' screen now with your build project ready to go!  Finally!  Time to BUILD!  In the upper-right corner you should see a blue button that says 'New Build' so click that and away it goes!  You'll see a bunch of 'Console' output that you can look at while it works (takes about a minute to complete).  If all goes well then you should have your new shiny patch ready to go!  If any errors happened then ask a friend for assistance.

13 - Now to download your patches, but where are they located?  After a successful build, just click on 'Artifacts' and you will see a downloadable ZIP file with both IPS and BPS patches ready to go!  I recommend using the BPS patches since it makes sure you have the correct ROM.  Remember that you must obtain your own ROM file and I CANNOT help you with that!

You're done!  Enjoy!
