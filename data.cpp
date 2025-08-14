#include<iostream>
using namespace std;

class data{
    int num1;

    public:
    data(int n=0){
        num1=n;
    }

    data operator+(data t2){
        data temp;
        temp.num1=num1+t2.num1;
        return temp;
    }

    void display(){
        cout<<num1<<endl;
    }
};

int main(){
    data t1(10);
    data t2(30);
    data result=t1+t2;
    result.display();

    return 0;
}