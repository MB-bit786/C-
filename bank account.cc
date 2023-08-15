/* write a c++ program Define a class to represent a bank account. Include the following members:
Data Member: -
a) Name of the depositor -
b) Account Number -
c) Type of Account -
d) Balance amount in the account -
e) Member Functions -
f) Toassignvalues-
g) To deposited an amount -
h) To withdraw an amount after checking balance -
i) To display name and balance*/    
#include <iostream>
using namespace std;
class BankAccount
{
 private:
    string name;
    int account_number;
    string type_of_account;
    double balance;

 public:
    BankAccount(string name, int account_number, string type_of_account, double balance) 
    {
        this->name = name;
        this->account_number = account_number;
        this->type_of_account = type_of_account;
        this->balance = balance;
    }   

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) 
    {
        if (balance >= amount) 
        {
            balance -= amount;
        }
        else {
            cout << "Insufficient balance" << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Type of Account: " << type_of_account << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount a("John Doe", 123456789, "Savings", 1000);
    a.deposit(500);
    a.withdraw(200);
    a.display();
    return 0;
}