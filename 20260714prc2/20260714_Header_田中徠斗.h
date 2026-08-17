#pragma once
const int NUMBER_COUNT = 10;
const int MAX_NUMBER = 50;
const int GAME_COUNT = 7;
const int WIN_POINT = 3;
const int DRAW_POINT = 1;

void CreateNumber(int number[]);
void ShowNumber(int number[],bool used[]);
int InputCheck(bool used[]);
int CpuSelect(bool used[]);
void Jugement(int playerNum, int cpuNum, int& playerScore, int& cpuScore);
void Result(int playerScore, int cpuScore);
