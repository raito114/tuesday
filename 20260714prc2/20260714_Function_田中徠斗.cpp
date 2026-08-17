#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Header_田中徠斗.h"

using namespace std;

int main(void)
{
	int  number[NUMBER_COUNT];
	bool used[NUMBER_COUNT] = {};

	int playerIndex;
	int cpuIndex;

	int playerScore = 0;
	int cpuScore = 0;

	srand((unsigned int)time(nullptr));

	CreateNumber(number);

	cout << "どっちの数字が大きいかゲーム" << endl;

	for (int turn = 1; turn <= GAME_COUNT; turn++)
	{
		cout << endl;
		cout << turn << "回戦" << endl;

		ShowNumber(number, used);

		cout << "番号を選んでください" << endl;
		playerIndex = InputCheck(used);

		cout << "プレイヤー" << number[playerIndex] << endl;
		cout << "cpu" << number[cpuIndex] << endl;

		Jugement(number[playerIndex], number[cpuIndex], playerScore, cpuScore);

		cout << "現在の得点" << endl;
		cout << "Player" << playerScore << endl;
		cout << "cpu" << cpuScore << endl;
	}

	Result(playerScore, cpuScore);

	return 0;
}