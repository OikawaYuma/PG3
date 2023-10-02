#include <stdio.h>

template <typename T>
T Min(T a, T b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}


// 大小比較のできないchar型のみ例外設定を行う。
char Min(char a[], char b[]) {
	printf("数字は入力できません");
	return 0;
}



int main() {
	int x = 100;
	int y = 50;
	printf("%d\n", Min(x, y));

	float fX = 10.7f;
	float fY = 50.4f;
	printf("%f\n", Min(fX, fY));

	double dX = 30.5f;
	double dY = 14.4;
	printf("%lf\n", Min(dX, dY));

	char cX[] = "kamata";
	char cY[] = "kougakuin";
	Min(cX, cY);
	return 0;
}