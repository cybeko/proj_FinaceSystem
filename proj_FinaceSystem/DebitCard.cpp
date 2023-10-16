#include "DebitCard.h"

DebitCard::DebitCard(int u_balance, string u_name) : PaymentMethod(u_balance, u_name)
{
    SetType("Debit");
}