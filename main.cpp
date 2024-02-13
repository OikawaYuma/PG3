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
	// 初期化
	std::string testChar(100000, 'a');
	std::string coppyChar;
	std::string moveChar;

	// コピー用
	std::chrono::system_clock::time_point start, end;
	start = std::chrono::system_clock::now();
	//コピーする処理
	coppyChar = testChar;
	end = std::chrono::system_clock::now();
	double elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
	std::cout << elapsed << std::endl;

	// 移動用
	std::chrono::system_clock::time_point start2, end2;
	start = std::chrono::system_clock::now();
	//移動する処理
	moveChar = std::move(testChar);
	end = std::chrono::system_clock::now();
	double elapsed2 = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
	std::cout << elapsed2<< std::endl;

	return 0;
}