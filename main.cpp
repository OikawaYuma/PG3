#include<stdio.h>
#include <thread>

static int num = 1;

void PrintThread() {
	printf("thread %d\n", num);
	num++;
}

int main() {
	std::thread th1(PrintThread);
	th1.join();
	std::thread th2(PrintThread);
	th2.join();
	std::thread th3(PrintThread);
	th3.join();


	return 0;
}