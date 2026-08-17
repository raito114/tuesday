#include<iostream>
#include<cstdlib>
#include"20260714_Header_“c’†œq“l.h"

using namespace std;

void CreateNumber(int number[])
{
	for (int i = 0; i < NUMBER_COUNT; i++)
	{
		number[1] = rand() % (MAX_NUMBER + 1);
	}
}

void ShowNumber(int number[], bool used[])
{
	for (int i = 0; i < NUMBER_COUNT; i++)
	{
		cout << i + 1 << "i" << number[i] << endl;
	}
}

int InputCheck(bool used)
{
	int input;

	while (true)
	{
		cin >> input;

		if (input < 1 || input > NUMBER_COUNT)
		{
			cout << "‚à‚¤ˆê“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" ;
		}
		else if(used[input - 1])
		{
			cout << "‚»‚Ì”Ô†‚Í‘I‘ðÏ‚Ý‚Å‚·";
		}
		else 
		{
			used[input - 1] = true;
			return input - 1;
		}
	}
}

int CpuSelect(bool used)
{
	int index;

	do
	{
		index = rand() % NUMBER_COUNT;
	} while (used[index]);

	used[index] = true;

	return index;

}

void Jugement(int playerNum, int cpuNum, int& playerScore, int& cpuScore)
{
	if (playerNum > cpuNum)
	{
		cout << "player‚ÌŸ—˜" << endl;
		playerScore += WIN_POINT;
	}
	else if (playerNum < cpuNum])
	{
		cout << "cpu‚ÌŸ—˜" << endl;
		cpuScore += WIN_POINT;
	}
	else
	{
		cout << "ˆø‚«•ª‚¯" << endl;
		playerScore += DRAW_POINT;
		cpuScore += DRAW_POINT;
	}
}

void Result(int playerScore, int cpuScore)
{
	cout << endl;
}