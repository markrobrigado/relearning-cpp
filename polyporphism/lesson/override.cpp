/*
 *  override.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Provides information on override specifier.
*/

#include<iostream>

class Account {
public:
    virtual void withdraw() const { 
        std::cout << "Account::withdraw" << std::endl; 
    }
    virtual ~Account() {}
};

class SavingsAccount : public Account {
public:
    virtual void withdraw() const override { 
        std::cout << "SavingsAccount::withdraw" << std::endl; 
    }
    virtual ~SavingsAccount() {}
};

class CheckingAccount : public Account {
public:
    virtual void withdraw() const override { 
        std::cout << "CheckingAccount::withdraw" << std::endl; 
    }
    virtual ~CheckingAccount() {}
};

class TrustAccount : public Account {
public:
    virtual void withdraw() const override { 
        std::cout << "TrustAccount::withdraw" << std::endl; 
    }
    virtual ~TrustAccount() {}
};

int main() {

    /* Base pointers */
    Account *pAccount = new Account();
    Account *pSavingsAccount = new SavingsAccount();
    Account *pCheckingAccount = new CheckingAccount();
    Account *pTrustAccount = new TrustAccount();

    /*
     *  Override specifier
     *
     *  Base class functions can be overriden.
     *  To override base class funcions, function signatures and returns must be
     *  exactly the same.
     *  If signature and return are different then it is called function 
     *  redefiniton amd not function overriding.
     *  Redifinition is statically bound while ovveriding is dynamically bound.
    */
    /* Base Pointers*/
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
