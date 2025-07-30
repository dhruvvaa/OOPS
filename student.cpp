#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    protected:
    string grade;
    public:
    string name;

    void setRollno(int r){
        rollno=r;
    }
    int getRollno(){
        return rollno;
    }
};

class result: public student{
    public:
    void setg(){
        cout<<"Enter grade:";
        cin>>grade;
    }
    void display(){
    cout<<"Student Grade:"<<grade<<endl;
    }
}r1;

int main(){
    int roll;
    cout<<"Enter roll no:";
    cin>>roll;
    r1.setRollno(roll);
    cout<<"Roll No:"<<r1.getRollno()<<endl;
    r1.setg();
    r1.display();
    cout<<"Enter name:";
    cin>>r1.name;
    cout<<"Name:"<<r1.name;
}
