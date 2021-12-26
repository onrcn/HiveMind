#pragma once
#include "Drone.h"
#include "Worker.h"
#include <iostream>
#include <vector>
class Hive
{
private:
	std::vector<Worker> workers;
	std::vector<Drone> drones;
	int beeLimit = 20;
public:
	std::vector<Worker> GetWorkers();
	std::vector<Drone> GetDrones();
};

