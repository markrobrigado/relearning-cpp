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

bool SavingsAccount::withdraw(double amount) {
    return Account::withdraw(amount);
}

bool SavingsAccount::deposit(double amount) {
    amount += amount * (interestRate / 100);
    return Account::deposit(amount);
}

void SavingsAccount::print(std::ostream &os) const {
    os << "Savings Account: " << name << " Balance: " << balance 
       << " Interest rate: " << interestRate << "%";
}
