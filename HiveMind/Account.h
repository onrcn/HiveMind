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
	Account();
	~Account();
	Account(float honey, float money);
	void SetHoney(float honey);
	void SetMoney(float money);
	float GetHoney();
	float GetMoney();
	void pushHive(Hive newHive);
	std::vector<Hive> GetHive();
	void Update();
};

