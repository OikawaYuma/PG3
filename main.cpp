#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include <Windows.h>
#include <functional>

#include"Number.h"
//template <typename T>

int main() {
	Number<int,int>* IntNum = new Number<int,int>(10, 20);
	Number<float,float>* FloatNum = new Number<float,float>(30.0f, 50.0f);
	Number<double,double>* DoubleNum = new Number<double,double>(71.6, 45.6);


	 int Answer = Number<int,int>::Min(IntNum->number1, IntNum->number2);
	 float AnswerIF = Number<int, float>::Min(IntNum->number1, FloatNum->number2);
	 double AnswerID = Number<int, double>::Min(IntNum->number1, DoubleNum->number2);



	 float Answerf = Number<float,float>::Min(FloatNum->number1, FloatNum->number2);
	 double AnswerfD = Number<float, float>::Min(FloatNum->number1, DoubleNum->number2);

	 double Answerd = Number<double,double>::Min(DoubleNum->number1, DoubleNum->number2);




	printf("%d\n", Answer);
	printf("%f\n", AnswerIF);
	printf("%lf\n", AnswerID);

	printf("%f\n", Answerf);
	printf("%lf\n", AnswerfD);

	printf("%lf\n", Answerd);
	return 0;
}