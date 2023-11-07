#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include <Windows.h>

typedef void (*PFunc)(int);
void TimeCount() {
	int countTime = 180;
	while (countTime <= 0) {
		countTime--;
	}
}

int RandNum() {
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	int b = rand() % 6 + 1;

	return b;
}

int SelectNum(int num) {
	return 0;
}

void SetTimeOutAnswer( PFunc Answer,int randNum) {
	
	Answer(randNum);

}
void Answer(int randNum) {
	//サイコロの目を奇数か、偶数かを判断する
	int judgeNum = randNum % 2;
	//プレイヤーの予想を代入する
	int answerNum;
	scanf_s("サイコロの目が偶数なら0、奇数ならそれ以外の数字を入力してください : %d\n", &answerNum);
	Sleep(3 * 1000);
	if ((judgeNum == 0 && answerNum == 0) || (judgeNum == 1 && answerNum != 0)) {
		printf("正解");
	}
	else { printf("不正解"); };
}

int main() {
	//サイコロを転がす処理
	int (*pfunc)();
	pfunc = RandNum;
	int num = pfunc();

	// 奇数か偶数か選択し、正否を返す
	PFunc pAnswer;
	pAnswer = Answer;

	SetTimeOutAnswer( Answer,num);
	
	// サイコロの目の数を確認
	printf("\n%d", num);

	return 0;
}