#include "Ractangle.h"

Rectangle::Rectangle() {
	sizes = { 10,7 };
}
Rectangle::~Rectangle() {
	printf("�n���痎�Ƃ��ꂽ");
}

void Rectangle::size() {
	area = sizes.x * sizes.y;

}
void Rectangle::draw() {
	printf("��`�̖ʐ� : %f\n",area);
	

}