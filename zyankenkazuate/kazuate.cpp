#include <iostream>
#include "kazuate.h"
using namespace std;

void kazuate::Game()
{
	cout << "＜数当てゲーム＞" << endl;
	answer = rand() % 10 + 1;
#if 1
	cout << answer << endl;
#endif
	while (true)
	{
		cout << "１〜１０の数字を選んでね > " << flush;
		cin >> player;
		if (player > answer){ cout << "答えより大きい" << endl; }
		else if (player < answer){ cout << "答えより小さい" << endl; }
		else{ cout << "当たり！" << endl; break; }
	}
}