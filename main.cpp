#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include <Windows.h>
#include <functional>

typedef  std::function<void()>(*PFunc)();



//サイコロを回す
auto RandNum = []() {
	int randNum;
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	randNum = rand() % 6 + 1;
	return randNum;

};

auto SelectNum = []() {
	printf("サイコロの目が偶数なら0、奇数ならそれ以外の数字を入力してください : ");
	int selectNum;
	scanf_s("%d", &selectNum);
	return selectNum;
};


// 渡された数字が偶数か、奇数を判断する
void SetTimeOut(std::function<void()> p, int setTime) {
	Sleep(setTime * 1000);
	p();
};



int main() {
	auto Judge = [&](int RandNum, int SelectNum) {
		int randNum = RandNum;
		int selectNum = SelectNum;
		//サイコロの目を奇数か、偶数かを判断する
		int judgeNum = randNum % 2;
		//プレイヤーの予想を代入する
		int answerNum = selectNum;
		// 確認
		printf("\nプレイヤーの選んだ数字　%d", selectNum);
		printf("\nサイコロの目　%d", randNum);
		if ((judgeNum == 0 && answerNum == 0) || (judgeNum == 1 && answerNum != 0)) {

			return 1;
		}
		else {
			return 0;
		};

	};

	// 判定
	int judge = Judge(RandNum(), SelectNum());

	//　正解の関数を読み込む
	std::function<void()> Answer = [&]() {
		
		printf("\n 結果　%d", judge);
		if (judge) {
			printf("\n正解");
		}
		else if (!judge) {
			printf("\n不正解");
		}
	};

	std::function<void()>  answer = Answer;
	SetTimeOut(answer, 3);


	
	return 0;
}