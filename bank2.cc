/*write a c++ program Assume that a bank maintains two kinds of accounts for customer, one called as saving account and other as current accounts provides Simple interest and withdraw facilities but no Cheque book facility.
a) The current account provides Cheque book facility but no interest.
b) Current account holders should maintain a minimum balance and if the
balance falls below this level a service charges is imposed*/
#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    string name;
    double balance;

    Account(string name, double balance) {
        this->name = name;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        balance -= amount;
    }

    double getBalance() {
        return balance;
    }
};

class SavingAccount : public Account {
public:
    SavingAccount(string name, double balance) : Account(name, balance) {}

    void calculateInterest() {
        balance += balance * 0.05;
    }
};

class CurrentAccount : public Account {
public:
    CurrentAccount(string name, double balance) : Account(name, balance) {}

    void withdraw(double amount) {
        if (balance - amount < 1000) {
            cout << "Insufficient balance. Cannot withdraw." << endl;
        } else {
            balance -= amount;
        }
    }
};

int main() {
    SavingAccount sa("John Doe", 1000);
    CurrentAccount ca("Jane Doe", 5000);

    cout << "Saving account balance: " << sa.getBalance() << endl;
    cout << "Current account balance: " << ca.getBalance() << endl;

    sa.deposit(500);
    ca.withdraw(1000);

    cout << "Saving account balance: " << sa.getBalance() << endl;
    cout << "Current account balance: " << ca.getBalance() << endl;

    sa.calculateInterest();

    cout << "Saving account balance: " << sa.getBalance() << endl;

    return 0;
}