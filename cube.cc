/*Write a c++ program to find the multiplication 
values and the cubic values using inline function.*/
#include <iostream>
using namespace std;

// Inline function to find the multiplication of two numbers
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function to find the cubic value of a number
inline int cube(int a) {
    return a * a * a;
}

int main() {
    // Get two numbers from the user
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Print the multiplication of the two numbers
    cout << "Multiplication: " << multiply(a, b) << endl;

    // Print the cubic value of the first number
    cout << "Cubic value: " << cube(a) << endl;

    return 0;
}