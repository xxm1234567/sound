//contains screen manipulation functions, such as clearScreen(), gotoxy(),
// setColor(), etc
#include "screen.h"
#include <stdio.h>
/***********************************************************************************
	Punction definaition of clearScreen()
	This function will use VT100 escape sequence "\ESC[2J" to erase the total
	terminal screen
	input arguement: none
	return argument: none
 ***********************************************************************************/
void clearScreen(void){
	printf("%c[2J",ESC);
	fflush(stdout);
}
/***********************************************************************************
	punction defination of gotoxy()
	This function uses VT100 escape sequence "\ESC[row;colH" to set cursor
	to the specific location of the terminal screen
	input argument:
		int row:	row number (1 is top)
		int col:	col number (1 is left)
	return argument: none
 ************************************************************************************/
void gotoxy(int row, int col){
	printf("%c[%d;%dH",ESC, row, col);
	fflush(stdout);
}
/************************************************************************************
	Punction defination of setColor()
	This function uses VT100 escape sequence "\ESC[1;colorm" to use the different
	color to label the intensity of sound of the terminal screen
	input argument:
		int color:	color number
	return argument: none
 ************************************************************************************/


void setColor(int color){
	printf("%c[1;%dm", ESC, color);
	fflush(stdout);
}
/*************************************************************************************
	Punction defination of bar()
	This function uses VT100 escape sequence "*" and "BAR" to illustrate the pitch
	of sounds of the terminal screen
	input argument:
		int col:	col number(1 is left)
		double dB:	dB number(sound intensity)
	return argument: 	none
 *************************************************************************************/
void bar(int col, double dB){
	int i;
	for(i=0; i<dB/4; i++){
		gotoxy (25-i, col);// the first bar start from col=1 
#ifndef UNICODE
		printf("%c", '*');
#else
		if(i<60/4) setColor(WHITE);
		else if(i<80/4) setColor(YELLOW);
		else setColor(RED);
		printf("%s", BAR);
#endif
	}
}
