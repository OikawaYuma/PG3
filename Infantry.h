#pragma once
#include "Soldier.h"
class Infantry : public Soldier
{
public:
	Infantry();
	~Infantry();
	void Attack() override;
};

