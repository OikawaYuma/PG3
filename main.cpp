#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include <Windows.h>
#include <functional>
//サイコロを回す
auto RandNum = [](int i) {
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	i = rand() % 6 + 1;
	return i;

};
// 渡された数字が偶数か、奇数を判断する
auto SetTimeOutAnswer = [](int randNum) {
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

	printf("\n%d", randNum);
};

int main() {

	SetTimeOutAnswer(RandNum(2));


	return 0;
}