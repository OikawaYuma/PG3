#include <stdio.h>

int Min(int a, int b) {
	if (a < b) {
		printf("%d\n", a);
		return 0;
	}
	else {
		printf("%d\n,", b);
		return 0;
	}
}
float Min(float a, float b) {
	if (a < b) {
		printf("%f\n", a);
		return 0;
	}
	else {
		printf("%f\n", b);
		return 0;
	}
}
double Min(double a, double b) {
	if (a < b) {
		printf("%lf\n", a);
		return 0;
	}
	else {
		printf("%lf\n", b);
		return 0;
	}
}



// 大小比較のできないchar型のみ例外設定を行う。
 char Min(char *a, char *b) {
	printf("数字は入力できません");
	return 0;
}



int main() {
	int x = 100;
	int y = 50;
	Min(x, y);

	float fX = 10.7f;
	float fY = 50.4f;
	 Min(fX, fY);

	double dX = 30.5f;
	double dY = 14.4;
	Min(dX, dY);

	char cX[] = "kamata";
	char cY[] = "kougakuin";
	Min(cX, cY);
	return 0;
}