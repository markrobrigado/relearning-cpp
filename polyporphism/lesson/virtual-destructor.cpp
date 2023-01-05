/*
 *  virtual-desturctor.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Provides information on virtual destructors.
*/

#include<iostream>

class Account {
public:
    virtual void withdraw() { 
        std::cout << "Account::withdraw" << std::endl; 
    }
    virtual ~Account() {
        std::cout << "Account::destructor" << std::endl;
    }
};

class SavingsAccount : public Account {
public:
    virtual void withdraw() { 
        std::cout << "SavingsAccount::withdraw" << std::endl; 
    }
    virtual ~SavingsAccount() {
        std::cout << "SavingsAccount::destructor" << std::endl;
    }
};

class CheckingAccount : public Account {
public:
    virtual void withdraw() { 
        std::cout << "CheckingAccount::withdraw" << std::endl; 
    }
    virtual ~CheckingAccount() {
        std::cout << "CheckingAccount::destructor" << std::endl;
    }
};

class TrustAccount : public Account {
public:
    virtual void withdraw() { 
        std::cout << "TrustAccount::withdraw" << std::endl; 
    }
    virtual ~TrustAccount() {
        std::cout << "TrustAccount::destructor" << std::endl;
    }
};

int main() {

    /* Base pointers */
    Account *pAccount = new Account();
    Account *pSavingsAccount = new SavingsAccount();
    Account *pCheckingAccount = new CheckingAccount();
    Account *pTrustAccount = new TrustAccount();

    pAccount->withdraw();
    pSavingsAccount->withdraw();
    pCheckingAccount->withdraw();
    pTrustAccount->withdraw();

    /* Virtual destructors make sure that 
     * objects gets destroyed in correct order 
    */
    delete pAccount;
    delete pSavingsAccount;
    delete pCheckingAccount;
    delete pTrustAccount;

    return 0;
}
