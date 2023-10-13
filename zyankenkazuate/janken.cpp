#include <iostream>
#include "janken.h"
using namespace std;

void janken::Game()
{
	cout << "＜じゃんけんゲーム＞" << endl;
	jGame = true;
	while (jGame)
	{
		NPC = rand() % 3 + 1;
		cout << "ぐー ... 1 || ちょき ... 2 || ぱー ... 3" << endl;
		cin >> player;
		if (player == 1 && NPC == 2) Pwin();
		else if (player == 2 && NPC == 1) Nwin();
		else if (player == 3 && NPC == 2) Nwin();
		else if (player == 3 && NPC == 1) Pwin();
		else cout << "あいこ" << endl;
	}
}

void janken::Pwin()
{
	cout << "プレイヤーの勝ち" << endl;
	jGame = false;
}

void janken::Nwin()
{
	cout << "NPCの勝ち" << endl;
	jGame = false;
}