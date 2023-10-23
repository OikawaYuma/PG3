#include <stdio.h>
template <typename Type>
Type Min(Type a, Type b) {
	if (a < b) {
		
		return static_cast<Type>(a);
	}
	else {
		return static_cast<Type>(b);
	}

	
}


 char Min(char *a, char *b) {
	 printf("数字以外は入力できません");
	return 0;
}



int main() {
	int x = 114;
	int y = 514;
	printf("%d\n",Min<int>(x, y));

	float fx = 10.7f;
	float fy = 56.4f;
	printf("%f\n", Min<float>(fx, fy));
	
	double dx = 1033.743f;
	double dy = 526.456f;
	printf("%lf\n", Min<float>(dx, dy));

	char cx[] = "kamata";
	char cy[] = "kogakuin";
	Min(cx, cy);
	return 0;
}