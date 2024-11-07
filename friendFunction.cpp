#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    Student(const string& n, int a, const string& dept, const string& c)
        : name(n), age(a), department(dept), course(c) {}

    friend void displayStudentDetails(const Student& student);
};

void displayStudentDetails(const Student& student) {
    cout << "Student Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    Student student("Ishaan", 19, "Computer Science", "Data Structures");

    displayStudentDetails(student);

    return 0;
}
