#include<stdio.h>
#include<stdlib.h>
#include "sound.h"

int main(void){
	while(1){
	// record 1 sec of sound into test.wav
	system("aredcord -q -r16000 -ci -f S16_LE -d1 test.wav");
	// open the wav file and read samples
	displayWAVheader("test.wav");
	// display necessary information (ration, wav header etc)
	displayWAVheader("test.wav");
	// calculate fast dBs
	displayBar("test.wav");
 	// send fast dBs to web (php program on www.cc.puv.f)i
	break; // for teating, just run the loop once
  	}
}
