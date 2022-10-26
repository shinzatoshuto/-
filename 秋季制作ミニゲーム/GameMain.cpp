#include "DxLib.h"
#include "GameMain.h"
#include "BlackJack.h"
#include "Player.h"
#include "Card.h"
#include "Stage.h"

extern BlackJack BJ;
Card card;
Stage stage;
Player player;

AbstractScene* Main::Update(){
	player.Update();
	if (BJ.KeyFlg & PAD_INPUT_1) {
		card.InitCard();
	}
	return this;
}

void Main::Draw() {
	player.Draw();
	stage.BG_Stage();
	card.DrawCard();
}