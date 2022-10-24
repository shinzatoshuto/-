#pragma once
#include "Images.h"

extern Image img;

class Card {
private:
	int type[4];
	int t;
	int MenuNumber;
	int SelectA;
	int SelectB;

	bool Card[52];

	int DrawNumber[52] = {
		1,1,1,1,2,2,2,2,3,3,3,3,
		4,4,4,4,5,5,5,5,6,6,6,6,
		7,7,7,7,8,8,8,8,9,9,9,9,
		10,10,10,10,10,10,10,10,
		10,10,10,10,10,10,10,10
	};

	int* card[52] = {
		 &img.cardA[0],&img.cardA[1],&img.cardA[2],&img.cardA[3],
		 &img.card2[0],&img.card2[1],&img.card2[2],&img.card2[3],
		 &img.card3[0],&img.card3[1],&img.card3[2],&img.card3[3],
		 &img.card4[0],&img.card4[1],&img.card4[2],&img.card4[3],
		 &img.card5[0],&img.card5[1],&img.card5[2],&img.card5[3],
		 &img.card6[0],&img.card6[1],&img.card6[2],&img.card6[3],
		 &img.card7[0],&img.card7[1],&img.card7[2],&img.card7[3],
		 &img.card8[0],&img.card8[1],&img.card8[2],&img.card8[3],
		 &img.card9[0],&img.card9[1],&img.card9[2],&img.card9[3],
		 &img.card10[0],&img.card10[1],&img.card10[2],&img.card10[3],
		 &img.cardJ[0],&img.cardJ[1],&img.cardJ[2],&img.cardJ[3],
		 &img.cardQ[0],&img.cardQ[1],&img.cardQ[2],&img.cardQ[3],
		 &img.cardK[0],&img.cardK[1],&img.cardK[2],&img.cardK[3],
	};

public:
	int For1;
	int For2;

public:
	void InitCard();
	void DrawCard();
	void ACard(int* rex);
	void ChackCard();
};
