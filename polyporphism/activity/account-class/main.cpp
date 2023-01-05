/*
 *  main.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Sample program using Account class.
*/

#include<iostream>
#include<vector>
#include "Account.h"
#include "AccountUtil.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

using std::cout;
using std::fixed;
using std::endl;
using std::vector;

int main() {

    cout.precision(2);
    cout << fixed;
 
    Account *pAccount1 = new SavingsAccount("Bob");
    Account *pAccount2 = new CheckingAccount("Alice", 2000);
    Account *pAccount3 = new TrustAccount("Eve", 5000, 5);

    /* Accounts vector */
    vector<Account *> accounts {pAccount1, pAccount2, pAccount3};

    display(accounts);
    deposit(accounts, 500);
    withdraw(accounts, 1000);

    delete pAccount1;
    delete pAccount2;
    delete pAccount3;

    return 0;
}