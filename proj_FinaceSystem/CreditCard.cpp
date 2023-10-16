#include "CreditCard.h"

CreditCard::CreditCard(int u_balance, string u_name) : PaymentMethod(u_balance, u_name)
{
    SetType("Credit");
}
