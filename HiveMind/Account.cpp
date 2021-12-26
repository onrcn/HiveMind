#include "Account.h"


void Account::SetHoney(int honey)
{
	this->honey = honey;
}
void Account::SetMoney(int money)
{
	this->money = money;
}

float Account::GetHoney()
{
	return honey;
}

float Account::GetMoney()
{
	return money;
}

std::vector<Hives> Account::GetHive()
{
	return hives;
}

void Account::Update(sf::Time dt)
{

}
