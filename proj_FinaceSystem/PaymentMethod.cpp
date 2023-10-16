#include "PaymentMethod.h"

PaymentMethod::PaymentMethod(int u_balance, string u_name) : balance(u_balance), name(u_name){}

void PaymentMethod::Withdraw(int u_sum, const string& u_category, const string& u_dateStr)
{
    if (u_sum <= balance)
    {
        balance -= u_sum;
        RecordTransaction(u_category, u_sum, u_dateStr);
    }
    else
    {
        cout << "Insufficient balance" << endl;
    }
}

void PaymentMethod::Replenish(int u_sum)
{
    balance += u_sum;
}

void PaymentMethod::RecordTransaction(const string& u_category, int u_amount, const string& u_dateStr)
{
    Transaction transaction(u_category, u_amount, u_dateStr);
    transactionHistory.push_back(transaction);

    expenseReport.AddExpense(u_category, u_amount);
}

void PaymentMethod::PrintTransactionHistory()
{
    cout << "[Transaction history for " << name << "]" << endl;

    for (size_t i = 0; i < transactionHistory.size(); ++i)
    {
        const Transaction& tr = transactionHistory[i];
        cout << "\nCategory: " << tr.GetCategory() << "\nAmount: " << tr.GetAmount() << "\nDate: " << tr.GetDate() << endl;
    }
    cout << endl;
}

void PaymentMethod::PrintExpenseReport()
{
    cout << "[Expense report for " << name << "]" << endl;

    for (auto ptr = expenseReport.day_exp.begin(); ptr != expenseReport.day_exp.end(); ++ptr)
    {
        const string& category = ptr->first;
        int amount = ptr->second;

        cout << "Category: " << category << "\nAmount spent: " << amount << endl << endl;
    }
    cout << endl;
}

void PaymentMethod::SaveTransactionHistoryToFile(const string& u_filename)
{
    ofstream file(u_filename);

    if (file.is_open())
    {
        file << "[Transaction History for " << name << "]" << endl;
        file << "Type: " << type;
        file << "\n__________________________" << endl;


        for (size_t i = 0; i < transactionHistory.size(); ++i)
        {
            file << "\nCategory: " << transactionHistory[i].GetCategory() << "\nAmount: " << transactionHistory[i].GetAmount() << "\nDate: " << transactionHistory[i].GetDate() << endl;
            file << "__________________________" << endl;
        }
        file.close();
        cout << "[Transaction history saved to file: " << u_filename << "]" << endl;
    }
    else
    {
        cout << "[Couldn't open the file.]" << endl;
    }
}

void PaymentMethod::Print()
{
    cout << "\t" << type << " card info" << endl;
    cout << "Type: " << type << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}

void PaymentMethod::SetType(const string& u_type)
{
    type = u_type;
}
