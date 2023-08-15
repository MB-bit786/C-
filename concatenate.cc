/*Write a  c++ program of two concatenate the two strings using Operator
Overloading*/
#include <iostream>
using namespace std;
class String {
private:
    char *str;
    int len;

public:
    String(char *str) {
        this->str = str;
        this->len = strlen(str);
    }

    String operator+(String str) {
        String res;
        res.str = new char[this->len + str.len + 1];
        strcpy(res.str, this->str);
        strcat(res.str, str.str);
        res.len = this->len + str.len;
        return res;
    }

    friend ostream &operator<<(ostream &os, String str) {
        os << str.str;
        return os;
    }
};

int main() {
    String str1("Hello");
    String str2("World");
    String str3 = str1 + str2;
    cout << str3 << endl;
    return 0;
}