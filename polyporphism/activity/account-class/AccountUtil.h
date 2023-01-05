/*
 *  AccountUtil.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Contains the method definition of AccountUtil class.
*/

#include<vector>
#include "Account.h"

#ifndef _ACCOUNTUTIL_H_
#define _ACCOUNTUTIL_H_

/* Helper functions for Account class */
void display(const std::vector<Account *> &accounts);
void deposit(std::vector<Account *> &accounts, double amount);
void withdraw(std::vector<Account *> &accounts, double amount);

#endif
