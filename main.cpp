#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include <Windows.h>
#include <functional>

#include"Number.h"
//template <typename T>

int main() {
	Number<int>* IntNum = new Number<int>(10, 20);
	Number<float>* FloatNum = new Number<float>(30.0f, 50.0f);
	Number<double>* DoubleNum = new Number<double>(71.6, 45.6);


	 int Answer = Number<int>::Min(IntNum->number1, IntNum->number2);
	 float Answerf = Number<float>::Min(FloatNum->number1, FloatNum->number2);
	 double Answerd = Number<double>::Min(DoubleNum->number1, DoubleNum->number2);
	printf("%d\n", Answer);
	printf("%f\n", Answerf);
	printf("%lf\n", Answerd);
	return 0;
}