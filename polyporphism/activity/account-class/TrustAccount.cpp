/*
 *  TrustAccount.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Contains the method definition of TrustAccount class.
*/

#include<iostream>
#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double interestRate) :
    SavingsAccount {name, balance, interestRate}, numberOfWithdrawal {0} {
}

bool TrustAccount::deposit(double amount) {
    if (amount >= bonusRequirement) {
        amount += bonusAmount;
    }
    return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount) {
    if (numberOfWithdrawal >= maxWithdrawal || amount > (balance * maxWithdrawalPercent)) {
        return false;
    } else {
        ++numberOfWithdrawal;
        return SavingsAccount::withdraw(amount);
    }
}

void TrustAccount::print(std::ostream &os) const {
    os << "Trust Account: " << name << " Balance: " << balance 
       << " Interest rate: " << interestRate << "%";
}
