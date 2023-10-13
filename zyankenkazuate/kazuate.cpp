#include <iostream>
#include "kazuate.h"
using namespace std;

void kazuate::Game()
{
	cout << "ƒ”“–‚ÄƒQ[ƒ€„" << endl;
	answer = rand() % 10 + 1;
#if 1
	cout << answer << endl;
#endif
	while (true)
	{
		cout << "‚P`‚P‚O‚Ì”Žš‚ð‘I‚ñ‚Å‚Ë > " << flush;
		cin >> player;
		if (player > answer){ cout << "“š‚¦‚æ‚è‘å‚«‚¢" << endl; }
		else if (player < answer){ cout << "“š‚¦‚æ‚è¬‚³‚¢" << endl; }
		else{ cout << "“–‚½‚èI" << endl; break; }
	}
}