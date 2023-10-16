using namespace std;
#include <iostream>
#include "DebitCard.h"
#include "CreditCard.h"

int main()
{
    const string fileName_deb = "debit_transaction_history.txt";
    const string fileName_cred = "credit_transaction_history.txt";
    const string fileName_wallet = "wallet_transaction_history.txt";

    DebitCard debitCard(5700, "Debit Card");
    debitCard.Print();
    CreditCard creditCard(5700, "Credit Card");
    creditCard.Print();
    
    cout << "\n[Making transactions.]\n" << endl;

    debitCard.Withdraw(500, "Bills", "1.10.2023");
    debitCard.Withdraw(600, "Car", "3.10.2023");
    debitCard.Withdraw(200, "Entertainment", "4.10.2023");
    debitCard.Withdraw(150, "Bills", "2.10.2023");

    debitCard.Print();
    cout << endl;

    debitCard.PrintTransactionHistory();
    debitCard.PrintExpenseReport();

    debitCard.SaveTransactionHistoryToFile(fileName_deb);
    return 0;
}