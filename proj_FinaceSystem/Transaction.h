#pragma once
using namespace std;
#include <iostream>
#include <string>

class Transaction
{
private:
    string category;
    int amount;
    string dateStr;

    int day;
    int month;
    int year;
public:
    Transaction(const string& u_category, int u_amount, const string& u_dateStr);
    void DateToInt();
    int GetAmount() const;
    string GetCategory() const;
    string GetDate() const;
};

