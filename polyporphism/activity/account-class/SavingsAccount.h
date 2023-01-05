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
private:
    static constexpr const char *defName = "Unnamed Savings Account";
    static constexpr const double defBalance = 0.0;
    static constexpr const double defInterestRate = 0.0;

protected:
    double interestRate;

public:
    /* Default constructor */
    SavingsAccount(
        std::string name = defName, 
        double balance = defBalance, 
        double interestRate = defInterestRate);

    /* Destructor */
    virtual ~SavingsAccount() = default;

    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    virtual void print(std::ostream &os) const override;
};

#endif