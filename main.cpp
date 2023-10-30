#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>

typedef void (*PFunc)(int*);
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

int SelectNum(int num) {
	return 0;
}

int main() {
	
	int (*pfunc)();
	pfunc = RandNum;
	int num = pfunc();

	pfunc = SelectNum;
	int a = 0;
	scanf_s("%d",&a);
	
	return 0;
}