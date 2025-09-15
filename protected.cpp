#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
};

class Student:public Person{
    public:
    void setDetails(string n,int a){
        name=n;
        age=a;
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};

int main(){
    Student s;
    s.setDetails("Dhruva",19);
    s.display();
    return 0;
}