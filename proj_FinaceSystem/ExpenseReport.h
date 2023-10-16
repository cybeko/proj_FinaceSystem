#pragma once
#include <string>;
#include <map>;
using namespace std;
#include <iostream>

class ExpenseReport
{
private:
    map <string, int> day_exp;
    friend class PaymentMethod;
public:

    void AddExpense(const string& u_category, int u_amount);
};