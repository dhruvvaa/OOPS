#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
    public:
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }

    Complex operator+(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }

    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

int main(){
    Complex a(3,2);
    Complex b(1,7);
    Complex c3=a+b;
    c3.display();

    return 0;
}