#include "Archer.h"



Archer::Archer()
{
	std::cout << "Archer:Unit created" << std::endl;
	attackBehaviour = new ICanAttack();
	name = "ARCHER ";
}


Archer::~Archer()
{
}
