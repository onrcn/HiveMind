#pragma once
#include <iostream>
#include <vector>

class Hive
{
private:
	float honey = 0;
	int workers;
	int drones;
	int beeLimit;
public:
	//constructors
	Hive();
	~Hive();

	//tasks
	void produceHoney(float dt);
	void reproduce();

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

