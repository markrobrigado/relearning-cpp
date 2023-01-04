/*
 *  AccountUtil.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Contains the method definition of AccountUtil class.
*/

#include<vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

#ifndef _ACCOUNTUTIL_H_
#define _ACCOUNTUTIL_H_

/* Helper functions for Account class */
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

/* Helper functions for SavingsAccount class */
void display(const std::vector<SavingsAccount> &accounts);
void deposit(std::vector<SavingsAccount> &accounts, double amount);
void withdraw(std::vector<SavingsAccount> &accounts, double amount);

/* Helper functions for CheckingAccount class */
void display(const std::vector<CheckingAccount> &accounts);
void deposit(std::vector<CheckingAccount> &accounts, double amount);
void withdraw(std::vector<CheckingAccount> &accounts, double amount);

/* Helper functions for TrustAccount class */
void display(const std::vector<TrustAccount> &accounts);
void deposit(std::vector<TrustAccount> &accounts, double amount);
void withdraw(std::vector<TrustAccount> &accounts, double amount);

#endif