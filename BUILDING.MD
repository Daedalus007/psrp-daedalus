This build setup will use a service called 'AppVeyor' which is (currently) free for our purposes and does all the things it needs to do.
This negates the need for a local development environment or installing Visual Studio/dependencies/python or any of that nonsense.

This guide is as simple as possible from a non-technical point of view.
You will need a modern web browser and a text editor of your choice.  I recommend Notepad++ but use whatever you like as long as it isn't Microsoft Notepad/Wordpad.

1 - Sign up for a Github account.  You'll use this for both Github and Appveyor so no need to make multiple accounts!

2 - Login to Github and go to this URL: https://github.com/maxim-zhao/psrp

3 - In the upper right corner click the 'Fork' button.

4 - Click on appveyor.yml and then the 'pencil' icon in the upper right of that window.

5 - Delete lines #16 and #17 which contain the following text, then save the file.

    appveyor DownloadFile -Url %URL% -FileName ps.zip
    7z x ps.zip -opsrp
	
OPTIONAL -- I would recommend editing titlescreen.en.png (psrp/psrp/new_graphics/) so that people know you modded it.  DO NOT USE MSPAINT because it will mess up the palette, use GIMP or another dedicated image editor.

6 - As far as your personal editing, that depends on what you want to accomplish.  For simple text edits, these are the files you want to edit.  You can use the Github editor but it is far easier to download the files and edit them in a dedicated text editor with find/replace and other features.
It is easy to edit charater names, item names, spell names, and so on.  Anything beyond that is beyond the scope of this guide.
All these files are in the 'psrp' folder on the 'Home' directory (the main page that displays the full ReadMe text and has links to releases).

	menus.yaml = Game menus and functionality
	ps1jert.sms.asm = The entire game's assembly code
	script.yaml = The entire game's script

7 - If you edited using the built-in Github editor then just 'Commit' your changes (Green Button) when you are done.  If you downloaded the files then you'll want to delete the originals (trash can icon) from the repository before uploading your replacements.  Make sure you are in the proper path and then use the 'Add File -> Upload Files' functionality to upload the downloaded ones that you edited locally on your computer.  Delete & replace is safer than just replacing depending on your setup.  I always would rather choose the SAFER option to make 100% certain my new files are being used.

8 - You need to go to the 'home' repository path then click the 'psrp' folder and use the 'Add Files' functionality to upload your SMS (Sega Master System) ROM of Phantasy Star 1 Japanese.  Your ROM must be named: ps1-j.sms

NOTE:  Make sure you have 'Show Hidden Extensions' enabled in Windows.  If you don't know what that is feel free to search online and/or ask a friend who knows computers.

**This ROM upload is temporary.  You MUST delete the ROM after you have completed your build so you don't get smacked with copyright issues by GitHub.**

9 - Now you are ready to build!  Go to https://www.appveyor.com/ and click 'Sign In' in the upper-right corner.  On the Login screen click the Blue 'Github' button on the upper left side.  It may also ask to 'Install' Appveyor as a Github App.  Accept the permissions.

10 - You are on the main build screen.  Click the Blue plus (+) sign button that says 'New Project'.  At this point it will show the Github repository that you just forked and modified.  Hover over the project name and then another blue 'Add' button will appear.  Click that button.

11 - You should be back on the 'Projects' screen now with your build project ready to go!  Finally!  Time to BUILD!  In the upper-right corner you should see a blue button that says 'New Build' so click that and away it goes!  You'll see a bunch of 'Console' output that you can look at while it works (takes about a minute to complete).  If all goes well then you should have your new shiny patch ready to go!  If any errors happened then ask a friend for assistance.

12 - Now to download your patches, but where are they located?  After a successful build, just click on 'Artifacts' and you will see a downloadable ZIP file with both IPS and BPS patches ready to go!  I recommend using the BPS patches since it makes sure you have the correct ROM.  Remember that you must obtain your own ROM file and I CANNOT help you with that!

**Delete the ROM file you uploaded to your repository!  DO NOT FORGET!**

You're done!  Enjoy!
