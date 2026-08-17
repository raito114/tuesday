#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260714_QuesionHeader_name.h"
using namespace std;


//====================================
// メイン
//====================================
int main()
{
    //プレイヤーが選択した球種を保存する変数
    int player;
    //cpuが打つ球種をランダムに選択する変数
    int cpu;
    //打球結果を決める確率を保存する変数
    int probability;

    //ストライク数
    int strike = 0;
    //ボール数
    int ball = 0;
    //アウト数
    int out = 0;
    //ヒット数
    int hit = 0;

    //乱数の初期化を行う変数
    srand((unsigned int)time(nullptr));

    //ゲーム開始のメッセージを表示
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    //３アウトになるまでゲームを繰り返す
    do
    {
        //プレイヤーが投げる球種を選択する
        cout << endl;
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート" << endl;
        cout << "1:カーブ" << endl;
        cout << "2:スライダー" << endl;
        cout << "3:シンカー" << endl;

        player = InputCheck(PITCHING_MIN,PITCHING_MAX);

        PitchingType(player);

        cpu = rand() % PROBABILITY;

        probability = rand() % PROBABILITY;

        //判定
        if (player != cpu)
        {
            if (probability == 0)
            {
                cout << "ボール！" << endl;
                ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                strike++;
            }
        }
        else
        {
            strike = 0;
            ball = 0;

            if (probability == 1)
            {
                cout << "OUT!!" << endl;
                out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                hit++;
            }
        }

        //カウント
        if (strike >= STRIKE_COUNT || ball >= BALL_COUNT)
        {
            if (strike >= STRIKE_COUNT)
            {
                cout << "三振アウト！" << endl;
                out++;
            }
            else
            {
                cout << "フォアボール！" << endl;
                hit++;
            }

            strike = 0;
            ball = 0;
        }

        cout << endl;
        cout << "B : " << ball << endl;
        cout << "S : " << strike << endl;
        cout << "O : " << out << endl;
        cout << "Runner : " << hit << endl;

    } while (out < OUT_COUNT && hit < HIT_COUNT);

    Result(out);

    return 0;
}