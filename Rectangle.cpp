#include "Ractangle.h"

Rectangle::Rectangle() {
	sizes = { 10,7 };
}
Rectangle::~Rectangle() {
	printf("馬から落とされた");
}

void Rectangle::size() {
	area = sizes.x * sizes.y;

}
void Rectangle::draw() {
	printf("矩形の面積 : %f\n",area);
	

}