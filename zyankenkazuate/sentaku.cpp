#include <iostream>
#include <ctime>
#include <cstdio>
#include"sentaku.h"
#include"kazuate.h"
#include"janken.h"
using namespace std;

void sentaku::Random() { srand((unsigned int)time(NULL)); }

void sentaku::Sentaku()
{
	while (game)
	{
		sentaku choice;
		kazuate kazu;
		janken pon;
		cout << "数当てゲーム ...１ || じゃんけんゲーム ... 2" << endl;
		cin >> mSentaku;
		choice.Random();
		if (mSentaku == 1)
		{
			kazu.Game();
		}
		else if (mSentaku == 2)
		{
			pon.Game();
		}
		cout << "もう一度遊ぶ ... 1 || 終わる ... 2" << endl;
		cin >> pSentaku;
		if (pSentaku == 2)
		{
			game = false;
		}
	}
}