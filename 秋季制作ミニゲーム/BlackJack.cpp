#include "DxLib.h"
#include "BlackJack.h"
#include "Title.h"
#include "AbstractScene.h"
#include "Stage.h"

#define WIDTH 1280
#define HEIGHT 720

Stage stage;

int KeyFlg = 0;
int NowKey = 0;
int OldKey = 0;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow)
{
	SetMainWindowText("ブラックジャック");
	ChangeWindowMode(TRUE);
	SetGraphMode(WIDTH, HEIGHT, 32);
	if (DxLib_Init() == -1)return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	//SceneManager sceneManager(new Title());

	while (ProcessMessage() == 0 && /*sceneManager.Update() != nullptr &&*/ !(KeyFlg & PAD_INPUT_7)) {
		OldKey = NowKey;
		NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
		KeyFlg = NowKey & ~OldKey;
		ClearDrawScreen();

		//sceneManager.Draw();
		stage.BG_Stage();

		ScreenFlip();
	}
	DxLib_End();

	return 0;
}