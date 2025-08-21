#include<iostream>
#include<math.h>
using namespace std;

class shape{
    public:
    virtual void area(){
        cout<<"Area of Shape"<<endl;
    }
};

class circle:public shape{
    double radius;

    public:
    circle(double r){
        radius=r;
    }

    void area() override{
        cout<<"Area of circle:"<<3.14*radius*radius<<endl;
    }
};

class rectangle:public shape{
    double length,breadth;

    public:
    rectangle(double l,double b){
        length=l;
        breadth=b;
    }

    void area() override{
        cout<<"Area of rectangle:"<<length*breadth<<endl;
    }
};

int main(){
    shape *s;
    circle c(5);
    rectangle r(4,6);

    s=&c;
    s->area();
    s=&r;
    s->area();

    return 0;
}