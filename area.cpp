#include<iostream>
using namespace std;

class areaCalculator{
    public:
    areaCalculator(){
        cout<<"Calculator is ready."<<endl;
    }

    int calculateArea(int side){
        return side*side;
    }

    int calculateArea(int length, int breadth){
        return length*breadth;
    }

    double calculateArea(double radius){
        return 3.14*radius*radius;
    }

    ~areaCalculator(){
        cout<<"Calculator closed."<<endl;
    }
};

int main(){
    areaCalculator a;
    cout<<"Area of sqaure with side 4:"<<a.calculateArea(4)<<endl;
    cout<<"Area of rectangle with length 3 and breadth 6:"<<a.calculateArea(3,6)<<endl;
    cout<<"Area of circle with radius 5.3:"<<a.calculateArea(5.3)<<endl;
}