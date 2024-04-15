# ECE 484 USB Chip Interfacing Project

# Getting Started
## The following are needed in order to perform this project
1. SH-U09C USB to TTL Serial Adapter with FTDI
2. Enough materials for an LED circuit (~9 wires, 1 100 ohm resistor, 1 LED)
3. Arduino microcontroller
4. Code editing Integrated Development Environment (IDE) on your computer
5. The AVR-GCC package installed and added to your PATH
6. Git installed
7. Install Python and add it to your PATH
8. Install FDTI drivers to ensure your SH-U09C is detected via the COM port

Once you have everything, follow the detailed guide below on how to set everything up and execute the project.

# Building the circuit
The schematic below shows the connections necessary for the circuit
![USB Interface Image](/assests/images/interface_schematic.png "USB Interface Image")

# Downloading your desired IDE
An IDE is a software program that will allow you to edit and execute code. It is vital to have an IDE to complete this project. However, IDE's are all personal preferece. I use VSCODE which can be downloaded [here](https://code.visualstudio.com/Download).

# Installing the AVR-GCC package and adding it to your PATH
## Installation
AVR-GCC is the desired C compiler and library package for interfacing with an Arduino with C code. AVR is one of the various programmer tools the Arduino IDE uses to interface with Arduino boards therefore allowing you to interface with Arduino boards using C. To install the correct version of AVR-GCC visit this [link](https://github.com/ZakKemble/avr-gcc-build/releases) and scroll to the version 13.2.0 and install the zip file titled "avr-gcc-13.2.0-x64-windows.zip". 

## Adding to your PATH
Once the correct zip file is installed follow the steps below.
1. Open your file explorer in the downloads section
2. Extract the contents of the zip file to any desired folder on your computer
3. Search for "Edit the system environment variables" on your windows computer
4. Once the system properties window is open, click the environment variables button on the bottom right of the window
5. Once the environment variables window is open, navigate to the second box titled "System variables" and click the variable titled "Path"
6. When Path is selected, click edit
7. In file explorer, navigate to the location your extracted the contents of your zip file to
8. Copy the path to the extracted contents
9. In the edit environment variables window click "new" and then paste the path 
10. Click "ok" and close out of the environment variables windows

If you had any trouble following along with these instructions a picture guide will be provided below
- Steps 1, 2
![Extract All Image](/assests/images/extract_contents.png "Extract All Image")
- Step 3
![Search Environment Variables](/assests/images/search_ev.png "Search Environment Variables")
- Step 4
![Environment Variables](/assests/images/environment_variables_w1.PNG "Environment Variables")
- Steps 5, 6
![Select Path](/assests/images/environment_variables_w2.PNG "Select Path")
- Steps 7, 8
![Copy Path](/assests/images/copy_path.png "Copy Path")
- Step 9
![Paste Path](/assests/images/environment_variables_w3.PNG "Paste Path")

# Installing Git
To install Git visit this [link](https://git-scm.com/downloads) and install the latest version of Git.

# Installing Python
To install python visit this [link](https://www.python.org/downloads/) and install the latest version of Python. To add Python to the PATH follow the the same steps used to add AVR-GCC to the PATH.

# Installing FDTI Drivers
To install the FDTI drivers visit this [link](https://ftdichip.com/drivers/vcp-drivers/) and install both the setup executable and the 64-Bit windows download.

---
# After completed everything above, the following will allow you to access and run the project
Now that the installations are all complete all that is left for you to do is clone the repository and change one file path!

# How to clone the repository
1. Open Command prompt *type "cmd" into the search bar on your windows device*
2. Navigate to your the folder you wish to clone the repository in *this can be done by typing cd directory_name*
3. Click on the green code button on the repository
4. Copy the github link provided in the drop down
5. Type: git clone github_link *github_link is the url provided by github which can be pasted by right clicking on the command prompt*

# Fix the file path
Open the compile script in your IDE and change the path where it says path_win_avr to your AVR-GCC pathing you added to your PATH but add "/bin/" to the end of it.

---

# How to run
Once you have completed everything above... Congratulations you are ready to run the project! Simply plug the SH-U09C into your laptop, make sure the COM port in the compile_script is correct, open your command prompt navigated to the correct folder, and type in python compile_script.py 4
