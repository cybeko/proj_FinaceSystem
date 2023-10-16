#pragma once
#include "PaymentMethod.h"

class CreditCard : public PaymentMethod
{
public:
    CreditCard(int u_balance, string u_name);
};
