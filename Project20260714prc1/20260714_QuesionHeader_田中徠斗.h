#pragma once

const int PITCHING_MIN = 0;//球種の最小値
const int PITCHING_MAX = 3;//球種の最大値
const int PROBABILITY = 4;//打球結果を決めるための乱数の範囲

const int STRIKE_COUNT = 3;//ストライク３つでアウト
const int BALL_COUNT = 4;//ボール４回でフォアボール
const int OUT_COUNT = 3;//３アウトでゲーム終了
const int HIT_COUNT = 4;//hit４回でcpuの勝利

enum PitchType
{
	Straight,//ストレート
	Curve,//カーブ
	Slider,//スライダー
	Sinker//シンカー
};

//球種番号を球種名にして表示
void PitchingType(int pitching);
//勝敗を表示
void Result(int out);
//入力された値が指定範囲内か確認して正しい値を返す
int InputCheck(int min, int max);

