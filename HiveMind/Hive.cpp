#include "Hive.h"

std::vector<Worker> Hive::GetWorkers()
{
    return workers;
}

std::vector<Drone> Hive::GetDrones()
{
    return drones;
}
