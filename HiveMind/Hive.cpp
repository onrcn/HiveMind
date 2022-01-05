#include "Hive.h"


Hive::Hive()
{
	float honey = 0;
	workers = 1;
	drones = 1;
	beeLimit = 20;
}

Hive::~Hive()
{

}

float Hive::produceHoney(float dt)
{
	float honeyProduced = workers * dt * 10;
	return honeyProduced;
}
void Hive::reproduce(float dt)
{
	int chance = rand() % 2;
	if ((getDrones() + getWorkers()) <= beeLimit)
	{

		switch (chance)
		{
		case 0:
			setWorkers(getWorkers() + getDrones());
			break;
		case 1:
			setDrones(2 * getDrones());
			break;
		}
		std::cout << getDrones() + getWorkers() << std::endl;

	}
}