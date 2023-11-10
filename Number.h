#pragma once
template <typename T>
class Number
{
public:
	
	Number(T number1, T number2) : number1(number1), number2(number2) {};
	T number1;
	T number2;

	static T Min(T num1, T num2) {
		if (num1 < num2) {

			return static_cast<T>(num1);
		}
		else {
			return static_cast<T>(num2);
		}
	};
};

