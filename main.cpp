#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include <Windows.h>
#include <functional>

auto num = [](int i) {
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	i = rand() % 6 + 1;
	return i;

};

//void SetTimeOutAnswer( PFunc Answer,int randNum) {
//	
//	Answer(randNum);
//
//}


auto Answer = [](int randNum) {
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
};

int main() {
	//サイコロを転がす処理

	num(1);

	printf("%d", num);

	// 奇数か偶数か選択し、正否を返す

	Answer(num(2));

	/*SetTimeOutAnswer( Answer,num);*/
	
	// サイコロの目の数を確認
	printf("\n%d", num);

	return 0;
}