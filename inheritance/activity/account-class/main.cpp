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

    /* Account */
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Bob"});
    accounts.push_back(Account {"Alice", 2000});
    accounts.push_back(Account {"Eve", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    cout << endl;

    /* Savings Account */
    vector<SavingsAccount> savingsAccounts;
    savingsAccounts.push_back(SavingsAccount {});
    savingsAccounts.push_back(SavingsAccount {"Bob"});
    savingsAccounts.push_back(SavingsAccount {"Alice", 2000, 3.0});
    savingsAccounts.push_back(SavingsAccount {"Eve", 5000, 6.0});

    display(savingsAccounts);
    deposit(savingsAccounts, 1000);
    withdraw(savingsAccounts, 2000);

    cout << endl;

    /* Checkin Account */
    vector<CheckingAccount> checkingAccounts;
    checkingAccounts.push_back(CheckingAccount {});
    checkingAccounts.push_back(CheckingAccount {"Bob"});
    checkingAccounts.push_back(CheckingAccount {"Alice", 2000});
    checkingAccounts.push_back(CheckingAccount {"Eve", 5000});

    display(checkingAccounts);
    deposit(checkingAccounts, 1000);
    withdraw(checkingAccounts, 2000);

    cout << endl;

    /* Trust Account */
    vector<TrustAccount> trustAccounts;
    trustAccounts.push_back(TrustAccount {});
    trustAccounts.push_back(TrustAccount {"Bob"});
    trustAccounts.push_back(TrustAccount {"Alice", 2000, 3.0});
    trustAccounts.push_back(TrustAccount {"Eve", 5000, 6.0});

    display(trustAccounts);
    deposit(trustAccounts, 5000);
    withdraw(trustAccounts, 100);
    withdraw(trustAccounts, 100);
    withdraw(trustAccounts, 100);
    withdraw(trustAccounts, 100);

    return 0;
}