#include<iostream>
using namespace std;

class Student{
    int rollno;
    string name;

    public:
    Student(int r,string n){
        rollno=r;
        name=n;
    }

    Student(const Student &s){
        rollno=s.rollno;
        name=s.name;
    }

    void display(){
        cout<<"\nRoll No:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
    }
};

int main(){
    Student s(29,"Dhruva");
    Student s1(s);
    cout<<"Original:";
    s.display();
    cout<<"Copy:";
    s1.display();
    return 0;
}