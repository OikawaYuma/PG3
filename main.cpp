#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
void TimeCount() {
	int countTime = 180;
	while (countTime <= 0) {
		countTime--;
	}
}

int RandNum() {
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	int b = rand() % 6+1;

	return b;
}

void SelectNum(int num) {

}

int main() {
	
	int (*pfunc)();
	pfunc = RandNum;
	int num = pfunc();
	int a = 0;
	scanf_s("%d",a);
	
	return 0;
}