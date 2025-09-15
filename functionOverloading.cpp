#include<iostream>
using namespace std;

class Math{
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
    Math m;
    cout<<"Addition of 2 ints:"<<m.add(3,5)<<endl;
    cout<<"Addition of 2 doubles:"<<m.add(4.6,2.7)<<endl;
    cout<<"Addition of 3 ints:"<<m.add(3,7,1)<<endl;
    return 0;
}