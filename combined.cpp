#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;

protected:
    string branch;

public:
    string name;

    Student(string n, int r, string b) {
        name = n;
        rollNo = r;
        branch = b;
    }

    virtual void display() {
        cout << "\nStudent Name: " << name
             << "\nRoll No: " << rollNo
             << "\nBranch: " << branch << endl;
    }
};

// Derived class
class PGStudent : public Student {
    string specialization;

public:
    PGStudent(string n, int r, string b, string sp) : Student(n, r, b) {
        specialization = sp;
    }

    void display() override {
        Student::display();
        cout << "Specialization: " << specialization << endl;
    }
};

int main() {
    Student s1("Dhruva", 101, "Computer Science");
    PGStudent s2("Aditya", 102, "Computer Science", "Data Science");

    Student *ptr;

    ptr = &s1;
    ptr->display();

    ptr = &s2;
    ptr->display();

    return 0;
}