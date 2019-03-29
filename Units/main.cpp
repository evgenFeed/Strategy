#include <iostream>
#include <vector>
#include "Unit.h"
#include "Warrior.h"
#include "Archer.h"
#include "Mage.h"

int main()
{
	std::vector<Unit*> units;
	units.push_back(new Warrior());
	units.push_back(new Archer());
	units.push_back(new Mage());
	


	return 0;
}