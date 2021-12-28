#include "Hive.h"

Hive::~Hive()
{

}

Hive::Hive()
{
    workers.push_back(Worker());
    drones.push_back(Drone());
}


std::vector<Worker> Hive::GetWorkers()
{
    return workers;
}

std::vector<Drone> Hive::GetDrones()
{
    return drones;
}
