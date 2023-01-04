/*
 *  SavingsAccount.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Contains the method definition of SavingsAccount class.
*/

#include<iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() :
    SavingsAccount {0.0, 0.0} {
}

SavingsAccount::SavingsAccount(double balance, double interestRate) :
    Account {balance}, interestRate {interestRate} {

}

SavingsAccount::~SavingsAccount() {

}

void SavingsAccount::deposit(double amount) {
    amount += ((amount * interestRate) / 100);
    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &account) {
    os << "Savings Account balance: " << account.balance 
       << " Interest rate: " << account.interestRate << "%";
    return os;
}
