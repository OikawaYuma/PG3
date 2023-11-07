#pragma once
#include <stdio.h>

struct Vector2 {
	float x;
	float y;
};


class IShape
{
public:
	IShape();
	~IShape();
	virtual void size() = 0;
	virtual void draw() = 0;
private:
	float area;
	Vector2 sizes;
	float radius;
};

