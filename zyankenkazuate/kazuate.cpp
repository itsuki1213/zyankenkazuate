#include <iostream>
#include "kazuate.h"
using namespace std;

void kazuate::Game()
{
	cout << "�������ăQ�[����" << endl;
	answer = rand() % 10 + 1;
#if 1
	cout << answer << endl;
#endif
	while (true)
	{
		cout << "�P�`�P�O�̐�����I��ł� > " << flush;
		cin >> player;
		if (player > answer){ cout << "�������傫��" << endl; }
		else if (player < answer){ cout << "������菬����" << endl; }
		else{ cout << "������I" << endl; break; }
	}
}