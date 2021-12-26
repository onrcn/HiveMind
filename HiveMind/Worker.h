#pragma once
#include "dependencies.h"
class Worker
{
private:
	float collectRate = 0.1;
public:
	void Collect(sf::Time dt);
};
