#pragma once
#include <iostream>
#include "IAttack.h"
#include "ICanAttack.h"
#include "ICantAttack.h"
class Unit
{
public:
	Unit();
	virtual~Unit();
	void Attack();
	std::string getName();
protected:
	std::pair<int, int> health_points;
	std::pair<int, int> experience;
	std::pair<int, int> armor;
	std::string name;
	int initiative;
	int level;
	int num_of_actions;
	IAttack * attackBehaviour;
};

