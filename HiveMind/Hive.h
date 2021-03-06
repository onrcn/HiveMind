#pragma once
#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>

class Hive
{
protected:
	float honey = 0;
	int workers;
	int drones;
	int beeLimit;
public:
	//constructors
	Hive();
	~Hive();

	//tasks
	float produceHoney(float dt);
	void reproduce(float dt);

	//getters and setters
	int getWorkers()
	{
		return workers;
	}
	int getDrones()
	{
		return drones;
	}
	int getLimit()
	{
		return beeLimit;
	}
	void setWorkers(int number)
	{
		workers = number;
	}
	void setDrones(int number)
	{
		drones = number;
	}
};

