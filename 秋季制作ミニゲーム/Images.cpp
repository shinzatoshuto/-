#include "DxLib.h"
#include "Images.h"
#include "Title.h"

int Image::LoadImages() {
	if(LoadDivGraph("Images/トランプA.png", 4, 4, 1, 50, 70, cardA) == -1) return -1; //A
	if (LoadDivGraph("Images/トランプ2.png", 4, 4, 1, 50, 70, card2) == -1)return -1; //2
	if (LoadDivGraph("Images/トランプ3.png", 4, 4, 1, 50, 70, card3) == -1)return -1; //3
	if (LoadDivGraph("Images/トランプ4.png", 4, 4, 1, 50, 70, card4) == -1)return -1; //4
	if (LoadDivGraph("Images/トランプ5.png", 4, 4, 1, 50, 70, card5) == -1)return -1; //5
	if (LoadDivGraph("Images/トランプ6.png", 4, 4, 1, 50, 70, card6) == -1)return -1; //6
	if (LoadDivGraph("Images/トランプ7.png", 4, 4, 1, 50, 70, card7) == -1)return -1; //7
	if (LoadDivGraph("Images/トランプ8.png", 4, 4, 1, 50, 70, card8) == -1)return -1; //8
	if (LoadDivGraph("Images/トランプ9.png", 4, 4, 1, 50, 70, card9) == -1)return -1; //9
	if (LoadDivGraph("Images/トランプ10.png", 4, 4, 1, 50, 70, card10) == -1)return -1; //10
	if (LoadDivGraph("Images/トランプjack.png", 4, 4, 1, 50, 70, cardJ) == -1)return -1; //Jack
	if (LoadDivGraph("Images/トランプqueen.png", 4, 4, 1, 50, 70, cardQ) == -1)return -1; //Queen
	if (LoadDivGraph("Images/トランプking.png", 4, 4, 1, 50, 70, cardK) == -1)return -1; //King

	if ((Inside = LoadGraph("Images/OIP.png")) == -1)return -1; //トランプ裏面

	if ((TitleImage = LoadGraph("Images/title.png")) == -1)return -1;

	return 0;
}