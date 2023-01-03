/*
 *  methods.cpp
 *  Author: Mark Robrigado
 *  Date: 03 January 2023
 *  Description: Provides information on implementing class member methods.
*/

#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class Account {

private:
    double balance;

/* Inline class methods */
public:
    void setBalance(double bal) {
        balance = bal;
    }

    double getBalance() {
        return balance;
    }

    bool withdraw(double amount);
    bool deposit(double amount);
};

/* Outside class declaration requires method prototypes inside class */
bool Account::withdraw(double amount) {
    if (balance > amount) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

bool Account::deposit(double amount) {
    balance += amount;
    return true;
}

/* Using header file*/
/*  
 *  Account.h
 *
 *  #ifndef _ACCOUNT_H_
 *  #define _ACCOUNT_H_
 *  
 *  class Account {
 *  
 *  private:
 *      double balance;
 * 
 *  public:
 *      void setBalance(double bal);
 *      double getBalance();
 *      bool withdraw(double amount);
 *      bool deposit(double amount);
 *  };
 * 
 *  #endif
*/

int main() {

    Account bobAccount;
    bobAccount.setBalance(1000);
    cout << "Account balance: $" << bobAccount.getBalance() << endl;

    cout << "> Deposit 100" << endl;
    if (bobAccount.deposit(100)) {
        cout << "Deposit successful!" << endl;
    }

    cout << "> Withdraw 1500" << endl;
    if(bobAccount.withdraw(1500)) {
        cout << "Withdrawal successful!" << endl;
    } else {
        cout << "Withdrawal failed!" << endl;
    }

    cout << "Account balance: $" << bobAccount.getBalance() << endl;

    return 0;
}
