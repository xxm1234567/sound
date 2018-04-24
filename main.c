#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include "sound.h"
#include "comm.h"

/*********************************************************************************************
 * Function Name: main
 * Discription  : Open the "test.wave" file and display the nessary information and calculate 
 *	 	  fast dBs.
 * Arguement    : none
 * Return       : none
 *********************************************************************************************/
int main(void){
	int ret;
	while(1){
	// record 1 sec of sound into test.wav
	ret = system("arecord -q -r16000 -c1 -f S16_LE -d1 test.wav");
	if(WIFSIGNALED(ret) && (WTERMSIG(ret)==SIGINT))break;
	// open the wav file and read samples
	displayWAVheader("test.wav");
	// display necessary information (ration, wav header etc)
	// calculate fast dBs
	displayBar("test.wav");
 	// send fast dBs to web (php program on www.cc.puv.f)i
//	break; // for teating, just run the loop once
  	}
}
