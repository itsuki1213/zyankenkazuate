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
		cout << "”“–‚ÄƒQ[ƒ€ ...‚P || ‚¶‚á‚ñ‚¯‚ñƒQ[ƒ€ ... 2" << endl;
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
		cout << "‚à‚¤ˆê“x—V‚Ô ... 1 || I‚í‚é ... 2" << endl;
		cin >> pSentaku;
		if (pSentaku == 2)
		{
			game = false;
		}
	}
}