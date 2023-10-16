#include "Transaction.h"

Transaction::Transaction(const string& u_category, int u_amount, const string& u_dateStr) : category(u_category), amount(u_amount), dateStr(u_dateStr)
{
    DateToInt();
}

void Transaction::DateToInt()
{
    size_t f_dot = dateStr.find('.');
    size_t s_dot = dateStr.find('.', f_dot + 1);

    string num1Str = dateStr.substr(0, f_dot);
    string num2Str = dateStr.substr(f_dot + 1);
    string num3Str = dateStr.substr(s_dot + 1);

    day = stoi(num1Str);
    month = stoi(num2Str);
    year = stoi(num3Str);
    
    /*cout << "\nDay: " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl;*/
}

int Transaction::GetAmount() const
{
    return amount;
}

string Transaction::GetCategory() const
{
    return category;
}

string Transaction::GetDate() const
{
    return dateStr;
}
