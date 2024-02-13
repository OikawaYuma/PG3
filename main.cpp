#include<stdlib.h>
#include<stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <list>
using namespace std;

int main() {
	
	/*vector<string> yamanoteLine = { "あああ" };
	

	for (vector<string>::iterator it_f = yamanoteLine.begin(); it_f != yamanoteLine.end();it_f++) {

		cout << *it_f << endl;
	}
		system("pause");*/



	list<char> yamanoteLine = { ""};


	for (list<string>::iterator it_f = yamanoteLine.begin(); it_f != yamanoteLine.end(); it_f++) {

		cout << *it_f << endl;
	}
	return 0;
}