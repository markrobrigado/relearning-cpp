/*
 *  CheckingAccount.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for CheckingAccount class.
*/

#include "Account.h"

#ifndef _CHECKINGACCOUNT_H_
#define _CHECKINGACCOUNT_H_

class CheckingAccount : public Account {
private:
    static constexpr const char *defName = "Unnamed Checking Account";
    static constexpr const double defBalance = 0.0;
    static constexpr const double checkFee = 1.5;

public:
    /* Default constructor */
    CheckingAccount(
        std::string name = defName, 
        double balance = defBalance
    );

    /* Destructor */
    virtual ~CheckingAccount() = default;

    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    virtual void print(std::ostream &os) const override;
};

#endif