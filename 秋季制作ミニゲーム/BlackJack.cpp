#include "DxLib.h"
#include "BlackJack.h"
#include "Title.h"
#include "AbstractScene.h"
#include "Stage.h"
#include "Images.h"
#include "Card.h"
#include "GameMain.h"

#define WIDTH 1280
#define HEIGHT 720

Image img;
Title title;
BlackJack BJ;

int NowKey = 0;
int OldKey = 0;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow)
{
	SetMainWindowText("ブラックジャック");
	ChangeWindowMode(TRUE);
	SetGraphMode(WIDTH, HEIGHT, 32);
	if (DxLib_Init() == -1)return -1;
	SetDrawScreen(DX_SCREEN_BACK);
	if (img.LoadImages() == -1)return -1;

	SceneManager sceneManager(new Main());

	card.InitCard();

	while (ProcessMessage() == 0 && /*sceneManager.Update() != nullptr &&*/ !(BJ.KeyFlg & PAD_INPUT_7)) {
		OldKey = NowKey;
		NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
		BJ.KeyFlg = NowKey & ~OldKey;
		ClearDrawScreen();

		sceneManager.Draw();
		

		ScreenFlip();
	}
	DxLib_End();

	return 0;
}