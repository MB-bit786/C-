/* write a c++ program Define a class to represent lecture details. Include the following members and 
the program should handle at least details of 5 lecturer.
Data members:
a) Name of the lecturer
b) Name of the subject
c) Name of course
d) Number of lecturers
Data functions:
a) To assign initial values
b) To add a lecture details
c) To display name and lecture details*/
#include <iostream>
using namespace std;

class Lecture {
private:
    string name;
    string subject;
    string course;
    int number;

public:
    Lecture(string name, string subject, string course, int number) {
        this->name = name;
        this->subject = subject;
        this->course = course;
        this->number = number;
    }

    void setName(string name) {
        this->name = name;
    }

    void setSubject(string subject) {
        this->subject = subject;
    }

    void setCourse(string course) {
        this->course = course;
    }

    void setNumber(int number) {
        this->number = number;
    }

    string getName() {
        return name;
    }

    string getSubject() {
        return subject;
    }

    string getCourse() {
        return course;
    }

    int getNumber() {
        return number;
    }

    void addLecture(Lecture lecture) {
        // Add the lecture details to the list
    }

    void displayLectureDetails() {
        // Display the lecture details
    }
};

int main() {
    // Create a lecture object
    Lecture lecture1("John Doe", "Math", "Calculus", 1);

    // Add the lecture details to the list
    lecture1.addLecture(lecture1);

    // Display the lecture details
    lecture1.displayLectureDetails();

    return 0;
}