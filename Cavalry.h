#pragma once
#include "Soldier.h"
class Cavalry : public Soldier
{
public:
	Cavalry();
	~Cavalry();
	void Attack() override;

};

