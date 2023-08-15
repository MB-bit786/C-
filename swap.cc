//Write a c++ program to swap the two numbers using friend function
#include <iostream>
using namespace std;

class A {
private:
    int a;
    int b;

public:
    A(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }

    friend void swap(A &a1, A &a2);
};

void swap(A &a1, A &a2) {
    int temp = a1.a;
    a1.a = a2.a;
    a2.a = temp;

    temp = a1.b;
    a1.b = a2.b;
    a2.b = temp;
}

int main() {
    A a1(10, 20);
    A a2(30, 40);

    cout << "Before swapping: " << endl;
    a1.display();
    a2.display();

    swap(a1, a2);

    cout << "After swapping: " << endl;
    a1.display();
    a2.display();

    return 0;
}