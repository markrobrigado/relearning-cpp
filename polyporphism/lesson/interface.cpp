/*
 *  interface.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Provides information on interface.
*/

#include<iostream>

class I_Printable {

    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
    
public:
    virtual ~I_Printable() = default;
    virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}

class Account : public I_Printable {
public:
    virtual void withdraw() { 
        std::cout << "Account::withdraw" << std::endl; 
    }
    virtual void print(std::ostream &os) const override {
        os << "Account::print";
    }
    virtual ~Account() {}
};

class SavingsAccount : public Account {
public:
    virtual void withdraw() { 
        std::cout << "SavingsAccount::withdraw" << std::endl; 
    }
    virtual void print(std::ostream &os) const override {
        os << "SavingsAccount::print";
    }
    virtual ~SavingsAccount() {}
};

class CheckingAccount : public Account {
public:
    virtual void withdraw() { 
        std::cout << "CheckingAccount::withdraw" << std::endl; 
    }
    virtual void print(std::ostream &os) const override {
        os << "CheckingAccount::print";
    }
    virtual ~CheckingAccount() {}
};

class TrustAccount : public Account {
public:
    virtual void withdraw() { 
        std::cout << "TrustAccount::withdraw" << std::endl; 
    }
    virtual void print(std::ostream &os) const override {
        os << "TrustAccount::print";
    }
    virtual ~TrustAccount() {}
};

int main() {

    /*
     *  Interface
     *
     *  Interface is an abstract class that has only pure virtual functions.
     *  These functions provide a general set of functionality to the user.
     *  Interface has a public access modifier.
     *  Every method must be implemented.
     *  Type information is strictly enforced.
    */
    Account *pAccount1 = new Account();
    std::cout << *pAccount1 << std::endl;

    Account *pAccount2 = new SavingsAccount();
    std::cout << *pAccount2 << std::endl;

    return 0;
}