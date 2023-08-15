/* write a c++ program Create a class account that stores customer name, account number and type of account. From this derive classes curr_acc and sav_acct to make them more specific to their requirements Include necessary member functions in order to achieve the following tasks
a) Accepts deposit from a customer and update balance.
b) Display the balance.
c) Compute and deposit interest.
d) Permit withdraws and updates the balance.
e) Check for the minimum balance, impose penalty, necessary and update the balance.*/
#include <iostream>
#include <string>

using namespace std;

class Account {
public:
    string name;
    int account_number;
    string type;
    double balance;

    Account(string name, int account_number, string type, double balance) {
        this->name = name;
        this->account_number = account_number;
        this->type = type;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        balance -= amount;
    }

    void display_balance() {
        cout << "Account balance: " << balance << endl;
    }
};

class Curr_Acc : public Account {
public:
    Curr_Acc(string name, int account_number, string type, double balance) : Account(name, account_number, type, balance) {}

    void check_min_balance() {
        if (balance < 1000) {
            cout << "Minimum balance not maintained. Penalty imposed." << endl;
        }
    }
};

class Sav_Acc : public Account {
public:
    Sav_Acc(string name, int account_number, string type, double balance) : Account(name, account_number, type, balance) {}

    void compute_interest() {
        balance += balance * 0.05;
    }
};

int main() {
    Curr_Acc ca("John Doe", 123456, "Current", 1000);
    Sav_Acc sa("Jane Doe", 654321, "Saving", 5000);

    ca.deposit(500);
    ca.withdraw(100);
    ca.check_min_balance();
    ca.display_balance();

    sa.deposit(1000);
    sa.compute_interest();
    sa.display_balance();

    return 0;
}