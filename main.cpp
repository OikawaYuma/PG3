#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include <Windows.h>
#include <functional>
#include <string>
#include <iostream>
#include <chrono>




int main() {
	std::string a(100000, 'a');
	std::string b;
	std::string c;
	std::chrono::system_clock::time_point start, end;
	start = std::chrono::system_clock::now();
	b = a;
	end = std::chrono::system_clock::now();
	double elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
	std::cout << elapsed << std::endl;
	std::chrono::system_clock::time_point start2, end2;
	start = std::chrono::system_clock::now();
	c = std::move(a);
	end = std::chrono::system_clock::now();
	double elapsed2 = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
	std::cout << elapsed2<< std::endl;
	return 0;
}