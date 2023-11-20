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

std::function<int()> Judge = []() {return 0; };

std::function<void()> Answer = []() {
	int judge = Judge();
	printf("\n 結果　%d", judge);
	if (judge) {
		printf("\n正解");
	}
	else if (!judge) {
		printf("\n不正解");
	}
};


int main() {
	int randNum = RandNum();
	int selectNum = SelectNum();

	auto Judge = [&]() {
		//サイコロの目を奇数か、偶数かを判断する
		int judgeNum = randNum % 2;
		//プレイヤーの予想を代入する
		int answerNum = selectNum;
		if ((judgeNum == 0 && answerNum == 0) || (judgeNum == 1 && answerNum != 0)) {

			return 1;
		}
		else {
			return 0;
		};

	};

	std::function<void()> Answer = [&]() {
		int judge = Judge();
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


	// 確認
	printf("\nプレイヤーの選んだ数字　%d", selectNum);
	printf("\n偶数か奇数か　%d", selectNum%2);
	printf("\nサイコロの目　%d", randNum);
	return 0;
}