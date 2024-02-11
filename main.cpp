#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include <Windows.h>

typedef void (*PFunc)(int,int);
int RandNum() {
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	int b = rand() % 6 + 1;

	return b;
}

void SetTimeOutAnswer( PFunc Answer,int randNum,int second) {
	Sleep(second * 1000);
	Answer(randNum,second);

}
static int answerNum =0;
void Answer(int randNum,int second) {
	//サイコロの目を奇数か、偶数かを判断する
	int judgeNum = randNum % 2;
	//プレイヤーの予想を代入する
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
	int second = 3; //三秒間待つ

	// 奇数か偶数か選択し、正否を返す
	PFunc pAnswer;
	pAnswer = Answer;

	printf("サイコロの目が偶数なら0、奇数ならそれ以外の数字を入力してください :");
	scanf_s("%d",&answerNum);
	
	SetTimeOutAnswer(pAnswer,num,second);
	
	// サイコロの目の数を確認
	printf("\n%d", num);

	return 0;
}