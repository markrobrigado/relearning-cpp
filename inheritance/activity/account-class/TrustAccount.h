/*
 *  TrustAccount.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for TrustAccount class.
*/

#include "SavingsAccount.h"

#ifndef _TRUSTACCOUNT_H_
#define _TRUSTACCOUNT_H_

/* A type of Account class with interest rate */
class TrustAccount : public SavingsAccount {

    friend std::ostream &operator<<(std::ostream &os, const TrustAccount &account);

private:
    static constexpr const char *defName = "Unnamed Trust Account";
    static constexpr const double defBalance = 0.0;
    static constexpr const double defInterestRate = 0.0;
    static constexpr const double bonusAmount = 50.0;
    static constexpr const double bonusRequirement = 5000.0;
    static constexpr const double maxWithdrawalPercent = 0.2;
    static constexpr const int maxWithdrawal = 3;

protected:
    int numberOfWithdrawal;

public:
    /* Default constructor */
    TrustAccount(
        std::string name = defName, 
        double balance = defBalance, 
        double interestRate = defInterestRate);

    /* Destructor */
    ~TrustAccount();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif