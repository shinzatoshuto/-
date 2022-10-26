#include "DxLib.h"
#include "Player.h"
#include "Card.h"
#include "BlackJack.h"

extern Card card;
extern BlackJack BJ;

Player::Player() {
	Declaration = 0;
	Select = 0;
}

void Player::Update() {
	if (card.For1 <= 21) {
		SelectDeclaration();
	}
	else {

	}
}

void Player::Draw() {
	int MenuY = Select * 100;
	DrawTriangle(200, 100 + MenuY, 220, 115 + MenuY, 200, 130 + MenuY, 0xffffff, TRUE);
}

void Player::SelectDeclaration() {
	if (BJ.KeyFlg & PAD_INPUT_UP) {
		if (--Select < 0)Select = 2;
	}
	if (BJ.KeyFlg & PAD_INPUT_DOWN) {
		if (++Select < 2)Select = 0;
	}
}

