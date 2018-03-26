
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int return_gameinterface3(int offset_color);
int return_gameinterface4(int offset_color);
int return_quitgame(int offset_color);
int return_quitgame2(int offset_color);
int return_restartgame(int offset_color);
int return_restartgame2(int offset_color);







/*void drawquit(int x, int y, int lx, int ly) {

	int offset_color=0;
	int color=0;

	for (int i=0;i<ly;i++){
		for (int j=0; j<lx; j++){
			color=return_quitgame(offset_color);
			DrawPixel(x+j,y+i,color);
			offset_color+=4;
		}
	}


}

 void drawquit2(int x, int y, int lx, int ly) {

	int offset_color=0;
	int color=0;

	for (int i=0;i<ly;i++){
		for (int j=0; j<lx; j++){
			color=return_quitgame2(offset_color);
			DrawPixel(x+j,y+i,color);
			offset_color+=4;
		}
	}


}


 void drawrestart(int x, int y, int lx, int ly) {

	int offset_color=0;
	int color=0;

	for (int i=0;i<ly;i++){
		for (int j=0; j<lx; j++){
			color=return_restartgame(offset_color);
			DrawPixel(x+j,y+i,color);
			offset_color+=4;
		}
	}


}

 void drawrestart2(int x, int y, int lx, int ly) {

	int offset_color=0;
	int color=0;

	for (int i=0;i<ly;i++){
		for (int j=0; j<lx; j++){
			color=return_restartgame2(offset_color);
			DrawPixel(x+j,y+i,color);
			offset_color+=4;
		}
	}


}

*/

void drawgameinterface3(int x, int y, int lx, int ly) {

	int offset_color=0;
	int color=0;

	for (int i=0;i<ly;i++){
		for (int j=0; j<lx; j++){
			color=return_gameinterface3(offset_color);
			DrawPixel(x+j,y+i,color);
			offset_color+=4;
		}
	}


}

void drawgameinterface4(int x, int y, int lx, int ly) {

	int offset_color=0;
	int color=0;

	for (int i=0;i<ly;i++){
		for (int j=0; j<lx; j++){
			color=return_gameinterface4(offset_color);
			DrawPixel(x+j,y+i,color);
			offset_color+=4;
		}
	}


}


void drawrestartscreen(){
	
	// Drawing a restart screen

	drawgameinterface3(100,100, 960,640);
	//drawrestart(500,300,320,160);
	//drawstart2(700,300,320,160);
	//drawquit(500,500,320,160);
	//drawquit2(500,500,320,160);
	delay(8000);
	drawgameinterface4(100,100,960,640);
	delay(8000);
}

