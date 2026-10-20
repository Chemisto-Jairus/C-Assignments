
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
public:
    string name;
    int age;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class inheriting from Person
class Student : public Person
{
public:
    string registrationNumber;

    void displayStudent()
    {
        cout << "Registration Number: "
             << registrationNumber << endl;
    }
};

// Derived class inheriting from Student
class EngineeringStudent : public Student
{
public:
    string course;

    void displayEngineeringStudent()
    {
        cout << "Course: " << course << endl;
    }
};

int main()
{
    // Create an object of EngineeringStudent
    EngineeringStudent student1;

    // Members inherited from Person
    student1.name = "Jairus";
    student1.age = 21;

    // Member defined in Student
    student1.registrationNumber = "25/U/07928/PS";

    // Member defined in EngineeringStudent
    student1.course = "Biomedical Engineering";

    // Call inherited and locally defined functions
    cout << "STUDENT DETAILS" << endl;
    cout << "------------------------" << endl;

    student1.displayPerson();
    student1.displayStudent();
    student1.displayEngineeringStudent();

    return 0;
}
