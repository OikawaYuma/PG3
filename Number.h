#pragma once
template <typename T1, typename T2>
class Number
{
public:
	
	Number(T1 number1, T2 number2) : number1(number1), number2(number2) {};
	T1 number1;
	T2 number2;
	static T1 Min(T1 num1, T2 num2) {
		if (num1 < num2) {

			return num1;
		}
		else {
			return num2;
		}
	};
};

