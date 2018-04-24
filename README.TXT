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
  - 

3. Operation
	
4. Manifest(list of files and short description of their roles)
5. License
6. Contact information
Xu Xinmeng,
Department of Information Technology
Vaasa University of Applied Sciences
Olympiakatu 3Q, Vaasa, Finland
Home: http://www.cc.puv.fi/~e1700588
Email: 18972921668@163.com
