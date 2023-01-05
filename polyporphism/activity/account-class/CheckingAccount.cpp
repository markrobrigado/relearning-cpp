/*
 *  CheckingAccount.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Contains the method definition of SavingsAccount class.
*/

#include<iostream>
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double balance) :
    Account {name, balance} {
}

bool CheckingAccount::withdraw(double amount) {
    amount += checkFee;
    return Account::withdraw(amount);
}

bool CheckingAccount::deposit(double amount) {
    return Account::deposit(amount);
}

void CheckingAccount::print(std::ostream &os) const {
    os << "Checking Account: " << name << " Balance: " << balance;
}