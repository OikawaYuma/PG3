#include <stdio.h>
int num = 1;
int maney = 100;
int sum = 0;
int Recursive(int n) {
	sum += maney;
	printf("%d時間目,一般的賃金%d , 変動時給%d :合計賃金%d\n", num, num * 1072, maney, sum);
	if (sum >= 1072*num) {
		printf("%d\n", num);
		printf("%d\n", num*1072);
		printf("%d", sum);
		return sum;
	}
	
	
	num++;
	maney = n * 2 - 50;
	return Recursive(maney);
}


int main() {
	Recursive(maney);
	return 0;
}