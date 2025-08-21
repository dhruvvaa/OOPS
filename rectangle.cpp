#include<iostream>
using namespace std;

class rectangle{
    int length, breadth;

    public:
    rectangle(){
        length=0;
        breadth=0;
    }

    rectangle(int l,int b){
        length=l;
        breadth=b;
    }

    rectangle(rectangle &r){
        length=r.length;
        breadth=r.breadth;
    }

    int area(){
        return length*breadth;
    }
};

int main(){
    rectangle r1;
    rectangle r2(10,5);
    rectangle r3(r2);

    cout<<"Area using default constructor:"<<r1.area()<<endl;
    cout<<"Area using parameterized constructor:"<<r2.area()<<endl;
    cout<<"Area using copy constructor:"<<r3.area()<<endl;

    return 0;
}