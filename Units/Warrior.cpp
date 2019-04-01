#include "Warrior.h"



Warrior::Warrior()
{
	std::cout << "Warrior:Unit created" << std::endl;
	attackBehaviour = new ICanAttack();
	name = "WARRIOR ";
}


Warrior::~Warrior()
{
}

