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

    friend std::ostream &operator<<(std::ostream &os, const CheckingAccount &account);

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
    ~CheckingAccount();

    bool withdraw(double amount);
    /* deposit() will be inherited from Account class */
};

#endif