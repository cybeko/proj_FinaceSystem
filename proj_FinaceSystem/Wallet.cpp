#include "Wallet.h"

Wallet::Wallet(int u_balance, string u_name) : PaymentMethod(u_balance, u_name)
{
    SetType("Debit");
}