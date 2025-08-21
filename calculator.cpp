#include<iostream>
using namespace std;

class calculator{
    public:
    int add(int a,int b){
        return a+b;
    }

    double add(double a,double b){
        return a+b;
    }

    int add(int a,int b,int c){
        return a+b+c;
    }
};

int main(){
    calculator c;
    cout<<"Addition of 2 integers:"<<c.add(6,3)<<endl;
    cout<<"Addition of 2 doubles:"<<c.add(7.8,3.3)<<endl;
    cout<<"Addition of 3 integers:"<<c.add(6,3,7)<<endl;

    return 0;
}