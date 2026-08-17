#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_QuesionHeader_name.h"
using namespace std;

//選択した球種を文字で表示
void PitchingType(int pitching)
{
    //球種の番号によって表示する文字を切り替える
    switch (pitching)
    {
    case Straight:
        cout << "ストレート" << endl;
        break;

    case Curve:
        cout << "カーブ" << endl;
        break;

    case Slider:
        cout << "スライダー" << endl;
        break;

    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}

//結果
void Result(int out)
{
    //アウト数が規定数以上ならプレイヤーの勝利
    if (out >= OUT_COUNT)
    {
        cout << "PLAYER WINNER!!" << endl;
    }
    else
    {
        //規定数に達しているならCPUの勝利
        cout << "CPU WINNER!!" << endl;
    }
}

int InputCheck(int min, int max)
{
    //プレイヤーが入力した値を保存する変数
    int player;

    //正しい値が入力されるまで繰り返す
    while (true)
    {
        cin >> player;

        //入力された値が球種の値以外なら再入力を促す
        if (player < PITCHING_MIN || player > PITCHING_MAX)
        {
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        else
        {
            break;
        }
    }

    return player;
}