#include "Account.h"

void Account::SetHoney(float honey)
{
	this->honey = honey;
}
void Account::SetMoney(float money)
{
	this->money = money;
}

Account::Account()
{
	honey = 0;
	money = 0;
	hives.push_back(Hive());
}

Account::~Account()
{
	hives.clear();
}

Account::Account(float honey, float money)
{
	this->honey = honey;
	this->money = money;
	hives.push_back(Hive());
}

void Account::pushHive(Hive newHive)
{
	hives.push_back(newHive);
}


float Account::GetHoney()
{
	return honey;
}

float Account::GetMoney()
{
	return money;
}

std::vector<Hive> Account::GetHive()
{
	return hives;
}

void Account::Update(float dt)
{
	for (auto i : hives)
	{
		i.reproduce(dt);
		SetHoney(GetHoney() + i.produceHoney(dt));
	}
}