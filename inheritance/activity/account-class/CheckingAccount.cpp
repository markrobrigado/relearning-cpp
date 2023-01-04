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

CheckingAccount::~CheckingAccount() {
}

bool CheckingAccount::withdraw(double amount) {
    amount += checkFee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const CheckingAccount &account) {
    os << "Checking Account: " << account.name << " Balance: " << account.balance;
    return os;
}