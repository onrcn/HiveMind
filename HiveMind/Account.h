#pragma once
#include <iostream>
#include <vector>
#include "Hive.h"
class Account
{
private:
	float honey;
	float money;
	std::vector<Hive> hives;
public:
	void SetHoney(int honey);
	void SetMoney(int money);
	float GetHoney();
	float GetMoney();
	std::vector<Hive> GetHive();
	void Update(sf::Time dt);
};

