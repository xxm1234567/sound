#-------------------------------SOUND SENSOR PROJECT--------------------------------
This project is meant to collect sound level at a proximity of a Respeberry Pi
device. The RPi is equipped with a USB sound card (C-Media Electronics, Inc.
Audio Adapter) and a microphone. The sound is recored at 16000Hz sample rate
and every second will produce 80 pieces of RMS value a sa bar-diagram...

Table of Content
1. Configuration
	Configeration USB Sound Card as default
		- Boot up RPi, and apply the USB sound card.
		- Use "lsusb" command to check if your USB sound card is mounted
		- Use "sudo nano /etc/asound.conf" command and put following content to the file:
		pcm.!default{
			type plug
			slave{
				pcm "hw:1,0"
				}
			}
			ctl.!default{
				type hw
				card 1
		}
		- Use "nano .asoundrc" command and put the same content to the file.
		- Run "alsamixeru should be able to see that USB sound card is the default audio device.
	Install Libcurl
		- First us ecommand "Is/usr/include /curl" to identify that /usr/include/curl/folder exists
		  or not.
		- If the folder doen not exist. Run "sudo apt-get update" to update the application list
		- Run "sudo apt-get install libcurl3" to install the lincurl3.
		- Run "sudo apt-get install libcurl4-opssl-dev" to install the development API of libcurl4.     
2. Installation
  -Connect an SD card reader with the SD card inside.
  -Open Etcher and select from your hard drive the Raspberry Pi .img or .zip file you wish to write to the SD card.
  -Select the SD card you wish to write your image to.
  -Review your selections and click 'Flash!' to begin writing data to the SD card.
  -Link a microphone with sound card to RPi.
  -Run the program.

3. Operation
	-Enable the module and use them within PUTTY (Linux environment).
	-Read the code. Much effort has gone into making the example code readable,not only in terms of the code itself, but also the            extensive inline comments and documentation blocks.
	-Running the program that you can make some voice and you will see the waveform.
 
4. Manifest(list of files and short description of their roles)
   main:
   	Open the "test.wav" file and display nessary information and calculate the fast dBs.
   sound:
   	Open the file and read the file, transfer the data to the diagram and print all of the sound information record the changing 
	of the sound´.
   screen:
   	Clear the screen and print the diagram to the screen, also show the different level of the sound.
   comm:
   	Record the sound information and send the sound information to server.
   	
5. License
   No Copyright
	The person who associated a work with this deed has dedicated the work to thepublic domain by waiving all of his or her rights         to the work worldwide undercopyright law, including all related and neighboring rights,to the extent allowed by law.
        You can copy, modify, distribute and perform the work, even for commercialpurposes, all without asking permission. See Other             Information below.
    
    Other Information:
      * In no way are the patent or trademark rights of any person affected by CC0, nor are the rights that other persons may have in           the work or in how the work is used, such as publicity or privacy rights.
      * Unless expressly stated otherwise, the person who associated a work with this deed makes no warranties about the work, and               disclaims liability for all uses of the work, to the fullest extent permitted by applicable law.
      * When using or citing the work, you should not imply endorsement by the author or the affirmer.
6. Contact information
Xu Xinmeng,
Department of Information Technology
Vaasa University of Applied Sciences
Olympiakatu 3Q, Vaasa, Finland
Home: http://www.cc.puv.fi/~e1700588
Email: 18972921668@163.com
