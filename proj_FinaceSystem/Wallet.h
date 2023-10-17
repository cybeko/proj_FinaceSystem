#pragma once
#include "PaymentMethod.h"

class Wallet : public PaymentMethod
{
public:
    Wallet(int u_balance, string u_name);
};
