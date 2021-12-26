#pragma once
#include <vector>
#include "HoneyBee.h"
#include "DroneBee.h"

class Hive
{
private:
	std::vector<HoneyBee> hobeybees;
	std::vector<DroneBee> malebees;
	Bee queen;
	int size;
	int price;
};

