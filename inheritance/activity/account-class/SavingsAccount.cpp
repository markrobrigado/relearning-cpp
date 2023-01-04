/*
 *  SavingsAccount.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Contains the method definition of SavingsAccount class.
*/

#include<iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double balance, double interestRate) :
    Account {name, balance}, interestRate {interestRate} {
}

SavingsAccount::~SavingsAccount() {
}

bool SavingsAccount::deposit(double amount) {
    amount += amount * (interestRate / 100);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &account) {
    os << "Savings Account: " << account.name << " Balance: " << account.balance 
       << " Interest rate: " << account.interestRate << "%";
    return os;
}