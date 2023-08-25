#include <iostream>
#include <string>

// Data Abstraction: Using Classes and Objects
class BankAccount {
private:
    std::string accountHolder;
    double balance;

public:
    BankAccount(std::string holder, double initialBalance) : accountHolder(holder), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit successful. New balance: " << balance << std::endl;
    }

    void displayBalance() {
        std::cout << "Account balance: " << balance << std::endl;
    }
};

// Procedural Abstraction: Using Functions
void processTransaction(BankAccount& account, double amount) {
    account.deposit(amount);
    account.displayBalance();
}

int main() {
    BankAccount myAccount("John Doe", 1000);

    processTransaction(myAccount, 500);
    processTransaction(myAccount, 200);

    return 0;
}


//Encapsulation provides an interface to the users to use those functions

// abstraction is basically hiding the implementation or complexity from the users and giving them only the necessary/eseential features