/*
 *  Account.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Contains the method definition of Account class.
*/

#include<iostream>
#include "Account.h"

Account::Account(std::string name, double balance) : 
    name {name}, balance {balance} {
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

bool Account::deposit(double amount) {
    if (amount < 0) {
        return false;
    } else {
        balance += amount;
        return true;
    }
}

double Account::getBalance() const {
    return balance;
}

void Account::print(std::ostream &os) const {
    os << "Account: " << name << " Balance: " << balance;
}
