/*
 *  virtual-functions.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Provides information on virtual functions.
*/

#include<iostream>

class Account {
public:
    virtual void withdraw() { 
        std::cout << "Account::withdraw" << std::endl; 
    }
};

class SavingsAccount : public Account {
public:
    virtual void withdraw() { 
        std::cout << "SavingsAccount::withdraw" << std::endl; 
    }
};

class CheckingAccount : public Account {
public:
    virtual void withdraw() { 
        std::cout << "CheckingAccount::withdraw" << std::endl; 
    }
};

class TrustAccount : public Account {
public:
    virtual void withdraw() { 
        std::cout << "TrustAccount::withdraw" << std::endl; 
    }
};

int main() {

    /*
     *  Virtual functions
     *
     *  Virtual functions override function in derived classes.
     *  Function signature and return type must match exactly.
     *  `virtual` keyword is not required but is best practice.
     *  If overriden version is not provided, function will be inherited instead. 
    */
    /* Base pointers */
    Account *pAccount = new Account();
    Account *pSavingsAccount = new SavingsAccount();
    Account *pCheckingAccount = new CheckingAccount();
    Account *pTrustAccount = new TrustAccount();

    pAccount->withdraw();
    pSavingsAccount->withdraw();
    pCheckingAccount->withdraw();
    pTrustAccount->withdraw();

    /* Delete pointers */
    delete pAccount;
    delete pSavingsAccount;
    delete pCheckingAccount;
    delete pTrustAccount;

    return 0;
}
