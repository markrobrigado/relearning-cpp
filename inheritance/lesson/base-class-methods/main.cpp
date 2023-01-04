/*
 *  main.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Sample program using Account class.
*/

#include<iostream>
#include "Account.h"
#include "SavingsAccount.h"

using std::cout;
using std::endl;

int main() {

    Account account {1000.0};
    cout << account << endl;

    cout << "> Deposit 500" << endl;
    account.deposit(500);

    cout << "> Withdraw 2000" << endl;
    account.withdraw(2000);

    cout << endl;

    SavingsAccount savingsAccount {500.0, 6.0};
    cout << savingsAccount << endl;

    cout << "> Deposit 1000" << endl;
    savingsAccount.deposit(1000);
    cout << savingsAccount << endl;
    
    return 0;
}
