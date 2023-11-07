#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <math.h>
#include "Ractangle.h"
#include "Circle.h"
#include "IShape.h"


int main() {
	IShape* shape[5];
	for (int i = 0; i < 5; i++) {
		if (i < 3) {
			shape[i] = new Circle;
		}
		else { shape[i] = new Rectangle; }
	}

	for(int i = 0; i < 5; i++) {
		
		shape[i]->size();
		shape[i]->draw();
		
	}

	for (int i = 0; i < 5; i++) {

		delete shape[i];

	}
	return 0;
}