/*
 *  SavingsAccount.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for SavingsAccount class.
*/

#include "Account.h"

#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_

class SavingsAccount : public Account {

public:
    double interestRate;

    /* Empty constructor*/
    SavingsAccount();

    /* Destructor */
    ~SavingsAccount();

    void deposit(double amount);
    void withdraw(double amount);
};

#endif