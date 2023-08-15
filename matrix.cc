//Write a  c++ Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;

class Matrix {
private:
    int *arr;
    int n;

public:
    Matrix(int n) {
        this->n = n;
        arr = new int[n];
    }

    void setElement(int i, int value) {
        arr[i] = value;
    }

    int getElement(int i) {
        return arr[i];
    }

    Matrix operator+(Matrix m) {
        Matrix res(n);
        for (int i = 0; i < n; i++) {
            res.setElement(i, arr[i] + m.getElement(i));
        }
        return res;
    }

    friend ostream &operator<<(ostream &os, Matrix m) {
        for (int i = 0; i < m.n; i++) {
            os << m.getElement(i) << " ";
        }
        return os;
    }
};

int main() {
    Matrix m1(5);
    m1.setElement(0, 1);
    m1.setElement(1, 2);
    m1.setElement(2, 3);
    m1.setElement(3, 4);
    m1.setElement(4, 5);

    Matrix m2(5);
    m2.setElement(0, 6);
    m2.setElement(1, 7);
    m2.setElement(2, 8);
    m2.setElement(3, 9);
    m2.setElement(4, 10);

    Matrix m3 = m1 + m2;

    cout << m3 << endl;

    return 0;
}