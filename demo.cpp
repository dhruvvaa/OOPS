#include<iostream>
using namespace std;

class Demo{
    public:
    Demo(){
        cout<<"Constructor is called"<<endl;
    }

    ~Demo(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){
    cout<<"Creating object"<<endl;
    Demo obj;
    cout<<"Exiting main"<<endl;
    return 0;
}