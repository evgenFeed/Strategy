#pragma once
#include "IAttack.h"
#include <iostream>

class ICantAttack :
	public IAttack
{
public:
	void Attack() override;
};

