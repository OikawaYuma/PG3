#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include <Windows.h>
#include <functional>

typedef  void(*PFunc)(int,int);



//サイコロを回す
auto RandNum = []() {
	int randNum;
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	randNum = rand() % 6 + 1;
	return randNum;

};

auto SelectNum = []() {
	int selectNum;
	scanf_s("%d", &selectNum);
	return selectNum;
};


// 渡された数字が偶数か、奇数を判断する
void SetTimeOut(PFunc answer,int setTime) {
	Sleep(setTime * 1000);
	answer(RandNum(),SelectNum());
};
	
void Answer ( int randNum, int selectNum){

	//サイコロの目を奇数か、偶数かを判断する
	int judgeNum = randNum % 2;
	//プレイヤーの予想を代入する
	int answerNum =selectNum;

	if ((judgeNum == 0 && answerNum == 0) || (judgeNum == 1 && answerNum != 0)) {
		printf("\n正解");
	}
	else { printf("\n不正解"); };

	printf("\nプレイヤーの選んだ数字　%d", answerNum);
	printf("\n偶数か奇数か　%d", judgeNum);
	printf("\nサイコロの目　%d", randNum);
};



int main() {
	printf("サイコロの目が偶数なら0、奇数ならそれ以外の数字を入力してください : ");
	PFunc answer = Answer;
	SetTimeOut(answer, 3);

	return 0;
}