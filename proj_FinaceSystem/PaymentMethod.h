#pragma once
using namespace std;
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Transaction.h"
#include "ExpenseReport.h"

class PaymentMethod
{
private:
    string name;
    string type;
    int balance;

    ExpenseReport expenseReport;
    vector<Transaction> transactionHistory;
public:
    PaymentMethod(int u_balance, string u_name);

    void Withdraw(int u_sum, const string& category, const string& u_dateStr);
    void Replenish(int u_sum);

    void RecordTransaction(const string& u_category, int u_amount, const string& u_dateStr);
    void PrintTransactionHistory();
    void PrintExpenseReport();
    void SaveTransactionHistoryToFile(const string& u_filename);



    void Print();
    void SetType(const string& u_type);
};

