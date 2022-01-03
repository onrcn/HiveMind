#include "Hive.h"

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


void Hive::produceHoney(float dt)
{
	float honeyProduced = workers * dt * 10;
}
void Hive::reproduce()
{

}