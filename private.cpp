#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;

    public:
    void setDetails(string s,int a){
        name=s;
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