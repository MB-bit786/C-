/* write a c++ program Assume a class cricketer is declared. Declare a derived class batsman from cricketer .
Data member of batsman. Total runs,Average runs and best performance. 
 Member functions input data,calculate average runs, Display data. (Single Inheritance)*/
 #include <iostream>
using namespace std;
class Cricketer {
public:
    int matches;
    int runs;

    void input() {
        cout << "Enter the number of matches played: ";
        cin >> matches;
        cout << "Enter the total runs scored: ";
        cin >> runs;
    }

    void calculateAverage() {
        float average = (float)runs / matches;
        cout << "The average runs scored is " << average << endl;
    }

    void display() {
        cout << "The number of matches played is " << matches << endl;
        cout << "The total runs scored is " << runs << endl;
        cout << "The average runs scored is " << average << endl;
    }
};

class Batsman : public Cricketer {
public:
    int bestPerformance;

    void input() {
        Cricketer::input();
        cout << "Enter the best performance: ";
        cin >> bestPerformance;
    }

    void display() {
        Cricketer::display();
        cout << "The best performance is " << bestPerformance << endl;
    }
};

int main() {
    Batsman b;
    b.input();
    b.calculateAverage();
    b.display();

    return 0;
}