#include "Circle.h"
Circle::Circle() {
	radius = 4;

}
Circle::~Circle() {

}

void Circle::size() {
	
	area = radius * radius * 3.14159f;
}

void Circle::draw() {
	printf("�~�̖ʐ� : %f\n", area);
}