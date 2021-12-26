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
public:
	Hive();
	Hive(int size, int price);
	Hive(int size, std::vector<HoneyBee> honeybees, std::vector<DroneBee> malebees);
	virtual ~Hive();
};

