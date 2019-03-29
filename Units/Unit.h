#pragma once
#include <iostream>
class Unit
{
public:
	Unit();
	~Unit();

private:
	std::pair<int, int> health_points;
	std::pair<int, int> experience;
	std::pair<int, int> armor;
	std::string name;
	int initiative;
	int level;
	int num_of_actions;
};

