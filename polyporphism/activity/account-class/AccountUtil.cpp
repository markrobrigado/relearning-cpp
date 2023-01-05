/*
 *  AccountUtil.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Contains the method definition of AccountUtil class.
*/

#include<iostream>
#include "AccountUtil.h"

/* Display all Account object in vector */
void display(const std::vector<Account *> &accounts) {
    for (const auto account : accounts) {
        std::cout << *account << std::endl;
    }  
}

/* Deposit amount to each Account object in vector */
void deposit(std::vector<Account *> &accounts, double amount) {
    for (auto account : accounts) {
        if (account->deposit(amount)) {
            std::cout << "Deposited " << amount << " to " << *account << std::endl;
        } else {
            std::cout << "Failed deposit of " << amount << " to " << *account << std::endl;
        }
    }
}

/* withdraw to each Account object in vector */
void withdraw(std::vector<Account *>  &accounts, double amount) {
    for (auto account : accounts) {
        if (account->withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << *account << std::endl;
        } else {
            std::cout << "Failed withdrawal of " << amount << " from " << *account << std::endl;
        }
    }
}
