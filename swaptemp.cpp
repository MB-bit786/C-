//Write a c++ program of to swap the two values using templates
#include <iostream>
using namespace std;

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    float c = 1.5, d = 2.5;
    swap(c, d);
    cout << "c = " << c << ", d = " << d << endl;

    string e = "hello", f = "world";
    swap(e, f);
    cout << "e = " << e << ", f = " << f << endl;

    return 0;
}