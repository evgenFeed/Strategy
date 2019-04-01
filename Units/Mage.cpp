#include "Mage.h"



Mage::Mage()
{
	std::cout << "Mage:Unit created" << std::endl;
	attackBehaviour = new ICantAttack();
	name = "MAGE ";
}


Mage::~Mage()
{
}



