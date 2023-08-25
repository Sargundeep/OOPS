#include <bits/stdc++.h>
using namespace std;

//ENCAPSULATION && ABSTRACTION
class Bank {
private:
    string name;
    string address;
    double balance;

public:
    Bank(string n, string a, double b) : name(n), address(a), balance(b) {}

    void setName(string n) {
        name = n;
    }

    void setBalance(double b) {
        balance = b;
    }

    void setAddress(string a) {
        address = a;
    }

    string getName() {
        return name;
    }

    double getBalance() {
        return balance;
    }

    string getAddress() {
        return address;
    }
    virtual void displayInfo() = 0; // PURE VIRTUAL FUNCTIONS
    virtual void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance for withdrawal." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
    }

};
//INHERITANCE
class CheckingAccount : public Bank {
private:
    double withdrawalLimit;
    double withdrawalFee;

public:
    CheckingAccount(string n, string a, double b, double limit, double fee)
        : Bank(n, a, b), withdrawalLimit(limit), withdrawalFee(fee) {}

    virtual void displayInfo() override {
        cout << "Checking Account Holder: " << getName() << ", Address: " << getAddress() << ", Balance: " << getBalance() << endl;
    }
    //POLYMORPHISM
    // Overriding the parent class's method to add an extra parameter
    void withdraw(double amount) override {
        if (amount > withdrawalLimit) {
            cout << "Withdrawal exceeds limit." << endl;
        } else {
            double newBalance = getBalance() - amount - withdrawalFee;
            setBalance(newBalance);
            cout << "Checking account withdrawal successful. New balance: " << getBalance() << endl;
        }
    }
    void withdraw(double amount, double withdrawalFee) {
        if (amount + withdrawalFee > getBalance()) {
            cout << "Insufficient balance for withdrawal including fee." << endl;
        } else {
            double newBalance = getBalance() - amount + withdrawalFee;
            setBalance(newBalance);
            cout << "Withdrawal successful with fee. New balance: " << getBalance()  << endl;
        }
    }
};

int main() {
    CheckingAccount* checking = new CheckingAccount("Jane Smith", "456 Elm St", 1500, 1000, 2.5);
    checking->displayInfo();
    checking->withdraw(800); // Calls CheckingAccount::withdraw()
    delete checking;
    return 0;
}
