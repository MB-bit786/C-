//write a c++ program Create an example of use delete and new operator.
#include <iostream>
using namespace std;

int main() {
    // Allocate a new integer on the heap.
    int *p = new int;

    // Assign the value 10 to the integer.
    *p = 10;

    // Print the value of the integer.
    cout << *p << endl;

    // Delete the integer from the heap.
    delete p;

    return 0;
}