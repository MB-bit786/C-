/* write a c++ program Create a class person having members name and age.Derive a class student having member percentage. 
 Derive another class teacher having member salary.  Write necessary member function to initialize, read and 
 write data. Write also Main function (Multiple Inheritance)*/
 #include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

class Student : public Person {
public:
    float percentage;

    void setPercentage(float percentage) {
        this->percentage = percentage;
    }

    float getPercentage() {
        return percentage;
    }
};

class Teacher : public Person {
public:
    int salary;

    void setSalary(int salary) {
        this->salary = salary;
    }

    int getSalary() {
        return salary;
    }
};

int main() {
    Student student;
    student.setName("John");
    student.setAge(20);
    student.setPercentage(90);

    cout << "Student name: " << student.getName() << endl;
    cout << "Student age: " << student.getAge() << endl;
    cout << "Student percentage: " << student.getPercentage() << endl;

    Teacher teacher;
    teacher.setName("Jane");
    teacher.setAge(30);
    teacher.setSalary(50000);

    cout << "Teacher name: " << teacher.getName() << endl;
    cout << "Teacher age: " << teacher.getAge() << endl;
    cout << "Teacher salary: " << teacher.getSalary() << endl;

    return 0;
}