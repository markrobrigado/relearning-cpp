/*
 *  SavingsAccount.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Contains the method definition of SavingsAccount class.
*/

#include<iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() :
    interestRate {0.5} {

}

SavingsAccount::~SavingsAccount() {

}

void SavingsAccount::deposit(double amount) {
    std::cout << "Savings Account deposit called with " << amount << std::endl;
}

void SavingsAccount::withdraw(double amount) {
    std::cout << "Savings Account withdraw called with " << amount << std::endl;
}
