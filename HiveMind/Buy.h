#pragma once
#include "Button.h"

class Buy : public Button
{
public:
	void OnClick(Account *account);
};

