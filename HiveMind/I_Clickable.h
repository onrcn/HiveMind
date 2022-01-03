#pragma once
#include "Account.h"

class I_Clickable
{
public:
	virtual void OnClick(Account *account) = 0;
	virtual ~I_Clickable() {};
};

