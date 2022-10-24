#include "DxLib.h"
#include "Images.h"
#include "Card.h"
#include "BlackJack.h"

extern BlackJack BJ;
extern Image img;

void Card::InitCard() {
	for (int i = 0; i < 4; i++) {
		type[i] = GetRand(51);
		if (type[i] == type[i - 1] || type[i] == type[i - 2] || type[i] == type[i - 3]) {
			type[i] = GetRand(51);
		}
	}
	for (int j = 0; j < 52; j++) {
		Card[j] = true;
	}
}

void Card::DrawCard() {
	for (int a = 0; a < 52; a++) {
		if (Card[a] == true) {
			ChackCard();

			DrawRotaGraph(200, 500, 3.0, 0, *card[type[0]], TRUE);
			DrawRotaGraph(250, 500, 3.0, 0, *card[type[1]], TRUE);
			DrawRotaGraph(900, 500, 3.0, 0, *card[type[2]], TRUE);
			DrawRotaGraph(950, 500, 3.0, 0, *card[type[3]], TRUE);

			SelectA = For1;
			SelectB = For2;

			ACard(&t);

			for (int i = 0; i < 4; i++) {
				DrawNumber[i] = t;
			}

			For1 = DrawNumber[type[0]] + DrawNumber[type[1]];
			For2 = DrawNumber[type[2]] + DrawNumber[type[3]];

			SetFontSize(50);

			DrawFormatString(200, 300, 0xffffff, "%d", For1, TRUE);
			DrawFormatString(900, 300, 0xffffff, "%d", For2, TRUE);
		}
	}
}

void Card::ACard(int *rex) {
	for (int a = 0; a < 4; a++) {
		if (card[a]) {
			for (int i = 4; i < 52; i++) {

				//プレイヤー
				if (SelectA <= 21) {
					if (card[type[0]] == card[a] && card[type[1]] == card[i]) {
						*rex = 11;
						break;
					}
					if (card[type[0]] == card[i] && card[type[1]] == card[a]) {
						*rex = 11;
						break;
					}
				}
				else {
					if (card[type[0]] == card[a] && card[type[1]] == card[i]) {
						*rex = 1;
						break;
					}
					if (card[type[0]] == card[i] && card[type[1]] == card[a]) {
						*rex = 1;
						break;
					}
				}

				//ディーラー
				if (SelectB <= 21) {
					if (card[type[2]] == card[a] && card[type[3]] == card[i]) {
						*rex = 11;
						break;
					}
					if (card[type[2]] == card[i] && card[type[3]] == card[a]) {
						*rex = 11;
						break;
					}
				}
				else {
					if (card[type[2]] == card[a] && card[type[3]] == card[i]) {
						*rex = 10;
						break;
					}
					if (card[type[2]] == card[i] && card[type[3]] == card[a]) {
						*rex = 10;
						break;
					}
				}
			}
		}
	}
}

void Card::ChackCard() {
	for (int i = 0; i < 4; i++) {
		Card[type[i]] = false;
	}
}