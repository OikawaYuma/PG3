#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();
	void size() override;
	void draw() override;

private:
	float area;
	Vector2 sizes;
	float radius;
};

