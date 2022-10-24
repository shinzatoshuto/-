#include "DxLib.h"
#include "Title.h"
#include "BlackJack.h"
#include "Images.h"

extern Image img;
extern BlackJack BJ;

AbstractScene* Title::Update() {
	if (BJ.KeyFlg & PAD_INPUT_DOWN) {
		if (++MenuNumber > 2) MenuNumber = 0;
	}
	if (BJ.KeyFlg & PAD_INPUT_UP) {
		if (--MenuNumber < 0)MenuNumber = 2;
	}

	if (BJ.KeyFlg & PAD_INPUT_A) {
		BJ.GameState = MenuNumber + 1;
		/*gmain.g_Score = 0;
		gmain.g_Initflg = 0;
		gmain.g_Stage = 0;*/
	}

	if (BJ.GameState == 1) {

	}
	if (BJ.GameState == 2) {

	}
	if (BJ.GameState == 3) {

	}

	return this;
}

void Title::Draw() {
	DrawGraph(0, 0, img.TitleImage, FALSE);

	int MenuY = MenuNumber * 97;
	DrawTriangle(495, 290 + MenuY, 540, 315 + MenuY, 495, 340 + MenuY, 0x000000, TRUE);
	DrawTriangle(500, 300 + MenuY, 530, 315 + MenuY, 500, 330 + MenuY, 0xff0000, TRUE);

}