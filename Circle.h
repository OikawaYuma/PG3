#pragma once
#include "IShape.h"
class Circle : public IShape
{
public:
	Circle();
	~Circle();
	void size() override;
	void draw() override;
private:
	float area;
	Vector2 sizes;
	float radius;
};

