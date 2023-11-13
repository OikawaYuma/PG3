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


	 int AnswerII = Number<int,int>::Min(IntNum->number1, IntNum->number2);
	 float AnswerIF = Number<int, float>::Min(IntNum->number1, FloatNum->number2);
	 double AnswerID = Number<int, double>::Min(IntNum->number1, DoubleNum->number2);



	 float AnswerFF = Number<float,float>::Min(FloatNum->number1, FloatNum->number2);
	 double AnswerFD = Number<float, double>::Min(FloatNum->number1, DoubleNum->number2);

	 double AnswerDD = Number<double,double>::Min(DoubleNum->number1, DoubleNum->number2);




	printf("%d\n", AnswerII);
	printf("%f\n", AnswerIF);
	printf("%lf\n", AnswerID);

	printf("%f\n", AnswerFF);
	printf("%lf\n", AnswerFD);

	printf("%lf\n", AnswerDD);
	return 0;
}