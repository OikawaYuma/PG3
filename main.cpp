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


	
	list<const char*> yamanoteLine = {
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome",
		"Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucho",};

	cout << "年代別山手線駅名一覧\n" << endl;

	cout << "1970年" << endl;
	for (list<const char*>::iterator it_f = yamanoteLine.begin(); it_f != yamanoteLine.end(); it_f++) {
		cout << *it_f << endl;
	}


	for (list<const char*>::iterator it_f = yamanoteLine.begin(); it_f != yamanoteLine.end(); it_f++) {
		if (*it_f == "Tabata") {
			it_f = yamanoteLine.insert(it_f, "Nishi-Nippori");
			// 一致したら抜ける
			break;
		}
	}

	cout << "\n2019年" << endl;
	for (list<const char*>::iterator it_f = yamanoteLine.begin(); it_f != yamanoteLine.end(); it_f++) {
		cout << *it_f << endl;
	}

	for (list<const char*>::iterator it_f = yamanoteLine.begin(); it_f != yamanoteLine.end(); it_f++) {
		if (*it_f == "Tamachi") {
			it_f = yamanoteLine.insert(it_f, "Takanawa Gateway");
			// 一致したら抜ける
			break;
		}
	}

	cout << "\n2022年" << endl;
	for (list<const char*>::iterator it_f = yamanoteLine.begin(); it_f != yamanoteLine.end(); it_f++) {
		cout << *it_f << endl;
	}
	return 0;
}