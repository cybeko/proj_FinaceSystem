#include "ExpenseReport.h"

void ExpenseReport::AddExpense(const string& u_category, int u_amount)
{
    day_exp[u_category] += u_amount;
}