#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include <Windows.h>
#include <functional>

#include"Enemy.h"

int main() {
	int attackPhase = 0;
	Enemy *enemy = new Enemy();
	enemy->Attack(attackPhase);
	attackPhase++;
	enemy->Attack(attackPhase);
	attackPhase++;
	enemy->Attack(attackPhase);


	return 0;
}