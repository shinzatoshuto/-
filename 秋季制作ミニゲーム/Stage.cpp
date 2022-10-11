#include "DxLib.h"
#include "Stage.h"

void Stage::BG_Stage() {
	DrawBox(0, 0, 1280, 720, GetColor(128, 0, 0), TRUE);
	DrawBox(20, 20, 1260, 700, 0x00ff00, TRUE);
}