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

    /* Empty Account constructor */
    Account account1 {};
    account1.deposit(100);
    account1.withdraw(100);

    cout << endl;
    
    /* Account pointer */
    Account *pAccount {nullptr};
    pAccount = new Account();
    pAccount->deposit(200);
    pAccount->withdraw(50);
    delete pAccount;

    cout << endl;

    /* Empty SavingsAccount constructor */
    SavingsAccount savingsAccount1 {};
    savingsAccount1.deposit(1000);
    savingsAccount1.withdraw(500);

    cout << endl;

    /* SavingsAccount pointer */
    SavingsAccount *pSavingsAccount {nullptr};
    pSavingsAccount = new SavingsAccount();
    pSavingsAccount->deposit(500);
    pSavingsAccount->withdraw(100);
    delete pSavingsAccount;

    return 0;
}
