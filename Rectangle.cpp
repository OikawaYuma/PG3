#include "Ractangle.h"

Rectangle::Rectangle() {
	sizes = { 10,7 };
}
Rectangle::~Rectangle() {
	printf("”n‚©‚ç—‚Æ‚³‚ê‚½");
}

void Rectangle::size() {
	area = sizes.x * sizes.y;

}
void Rectangle::draw() {
	printf("‹éŒ`‚Ì–ÊÏ : %f\n",area);
	

}