#include <iostream>
#include <string>
using namespace std;
template <typename T>
struct Student {
    T name;
    int age;
    T course;
    T department;
    Student(T n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
    void updateName(T newName) {
        name = newName;
    }
    void updateCourse(T newCourse) {
        course = newCourse;
    }
    void updateDepartment(T newDepartment) {
        department = newDepartment;
    }
};

int main() {
    Student<string> student1("Broski", 23, "Computer Science", "Engineering");
    cout << "Student 1 Details:" << endl;
    student1.display();
    cout << endl;
    student1.updateName("Ram");
    student1.updateCourse("Software Engineering");
    student1.updateDepartment("Information Technology");
    cout << "Updated Student 1 Details:" << endl;
    student1.display();
    cout << endl;
    Student<string> student2("Jester", 99, "Electrical Engineering", "Engineering");
    cout << "Student 2 Details:" << endl;
    student2.display();
    cout << endl;

    return 0;
}
