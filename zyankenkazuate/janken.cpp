#include <iostream>
#include "janken.h"
using namespace std;

void janken::Game()
{
	cout << "������񂯂�Q�[����" << endl;
	jGame = true;
	while (jGame)
	{
		NPC = rand() % 3 + 1;
		cout << "���[ ... 1 || ���傫 ... 2 || �ρ[ ... 3" << endl;
		cin >> player;
		if (player == 1 && NPC == 2) Pwin();
		else if (player == 2 && NPC == 1) Nwin();
		else if (player == 3 && NPC == 2) Nwin();
		else if (player == 3 && NPC == 1) Pwin();
		else cout << "������" << endl;
	}
}

void janken::Pwin()
{
	cout << "�v���C���[�̏���" << endl;
	jGame = false;
}

void janken::Nwin()
{
	cout << "NPC�̏���" << endl;
	jGame = false;
}