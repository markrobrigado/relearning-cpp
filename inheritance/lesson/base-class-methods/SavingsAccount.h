/*
 *  SavingsAccount.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for SavingsAccount class.
*/

#include "Account.h"

#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_

/* A type of Account class with interest rate */
class SavingsAccount : public Account {

    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &account);

protected:
    double interestRate;

public:
    /* Empty constructor*/
    SavingsAccount();

    /* Overloaded constructor */
    SavingsAccount(double balance, double interestRate);

    /* Destructor */
    ~SavingsAccount();

    void deposit(double amount);
    /* withdraw() will be inherited from Account class */
};

#endif