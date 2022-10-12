#include "DxLib.h"
#include "Images.h"

void Image::InitCard() {
	
	type = GetRand(51);
}

void Image::DrawCard() {

	int card[52] = {
	 cardA[0],cardA[1],cardA[2],cardA[3],
	 card2[0],card2[1],card2[2],card2[3],
	 card3[0],card3[1],card3[2],card3[3],
	 card4[0],card4[1],card4[2],card4[3],
	 card5[0],card5[1],card5[2],card5[3],
	 card6[0],card6[1],card6[2],card6[3],
	 card7[0],card7[1],card7[2],card7[3],
	 card8[0],card8[1],card8[2],card8[3],
	 card9[0],card9[1],card9[2],card9[3],
	 card10[0],card10[1],card10[2],card10[3],
	 cardJ[0],cardJ[1],cardJ[2],cardJ[3],
	 cardQ[0],cardQ[1],cardQ[2],cardQ[3],
	 cardK[0],cardK[1],cardK[2],cardK[3],
	};

	DrawRotaGraph(200, 500, 3.0, 0, card[type], TRUE);
	DrawRotaGraph(250, 500, 3.0, 0, card[type], TRUE);
	DrawRotaGraph(900, 500, 3.0, 0, card[type], TRUE);
	DrawRotaGraph(1100, 500, 3.0, 0, card[type], TRUE);


}

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

	return 0;
}