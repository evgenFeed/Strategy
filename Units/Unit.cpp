#include "Unit.h"



Unit::Unit()
{
	std::cout << "Unit created" << std::endl;
	attackBehaviour = new ICanAttack();
	name = "Unit";
}


Unit::~Unit()
{
	delete attackBehaviour;
}

void Unit::Attack()
{
	attackBehaviour->Attack();
}

std::string Unit::getName()
{
	return name;
}


