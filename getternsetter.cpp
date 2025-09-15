#include<iostream>
using namespace std;

class Student{
    private:
    string name;

    public:
    void setName(string n){
        name=n;
    }

    string getName(){
        return name;
    }

    void display(){
        cout<<"Name:"<<name;
    }
};

int main(){
    Student s;
    s.setName("Dhruva");
    s.getName();
    s.display();
    return 0;
}