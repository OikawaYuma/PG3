#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include "Soldier.h"
#include "Infantry.h"
#include "Cavalry.h"

int main() {
	Soldier* soldier[5];
	for (int i = 0; i < 5; i++) {
		if (i < 3) {
			soldier[i] = new Infantry;
		}
		else { soldier[i] = new Cavalry; }
	}

	for(int i = 0; i < 5; i++) {
		
			soldier[i]->Attack();
		
	}

	for (int i = 0; i < 5; i++) {

		delete soldier[i];

	}
	return 0;
}