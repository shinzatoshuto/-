#pragma once

class Image {
	int x, y;
	int type = 0;

	int cardA[4], cardJ[4], cardQ[4], cardK[4];
	int card2[4], card3[4], card4[4], card5[4];
	int card6[4], card7[4], card8[4], card9[4];
	int card10[4];
	int Inside;

public:
	void InitCard();
	void DrawCard();
	int LoadImages();
};

