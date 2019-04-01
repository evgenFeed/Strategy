#include <iostream>
#include <vector>
#include <string>
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
	
	for (auto u : units)
	{
		std::cout << u->getName();
		u->Attack();
	}

	return 0;
}