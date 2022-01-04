#include "Hive.h"
#include <math.h>
#include <stdlib.h>


Hive::~Hive()
{

}

Hive::Hive()
{
	float honey = 0;
	workers = 1;
	drones = 1;
	beeLimit = 20;
}


float Hive::produceHoney(float dt)
{
	float honeyProduced = workers * dt * 10;
	return honeyProduced;
}
void Hive::reproduce(float dt)
{
	int change = rand() % 2;
	if ((getWorkers() + getDrones() + 1) < 20) {
		if (dt == 5)
		{
			switch (change)
			{
			case 0:
				setWorkers(getWorkers() + 1);
			case 1:
				setDrones(getDrones() + 1);
			}
		}
	}
}