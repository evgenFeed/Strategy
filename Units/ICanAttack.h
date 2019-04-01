#pragma once
#include "IAttack.h"
#include <iostream>
class ICanAttack :
	public IAttack
{
public:
	void Attack() override;
};

