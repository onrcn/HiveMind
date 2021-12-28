#pragma once
#include "dependencies.h"
class Worker
{
private:
	float collectRate = 0.1f;
public:
	void Collect(sf::Time dt);
};
