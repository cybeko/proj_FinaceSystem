#pragma once
#include "PaymentMethod.h"

class DebitCard : public PaymentMethod 
{
public:
    DebitCard(int u_balance, string u_name);
};
