/*Write a c++ program of find the simple interest using constructor 
with dynamic initialization. Make constructor like Interest (int principal,
int year, int rate) Interest (int principal, int year, float rate = 2.5)
*/
#include <iostream>
using namespace std;

class Interest {
private:
    int principal;
    int year;
    float rate;

public:
    Interest(int principal, int year, float rate) {
        this->principal = principal;
        this->year = year;
        this->rate = rate;
    }

    Interest(int principal, int year) {
        this->principal = principal;
        this->year = year;
        this->rate = 2.5;
    }

    float calculateInterest() {
        return (principal * year * rate) / 100;
    }
};

int main() {
    Interest interest1(1000, 5, 2.5);
    Interest interest2(1000, 5);

    cout << "The simple interest for interest1 is " << interest1.calculateInterest() << endl;
    cout << "The simple interest for interest2 is " << interest2.calculateInterest() << endl;

    return 0;
}