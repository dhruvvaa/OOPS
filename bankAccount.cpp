#include<iostream>
using namespace std;

class bankAccount{
    private:
    int accountnumber;
    double balance;

    public:
    bankAccount(int accno,double bal){
        accountnumber=accno;
        balance=bal;
        cout<<"Account:"<<accountnumber<<" with balance:"<<balance<<" has been created."<<endl;
    }

    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Deposited Amount:"<<amount<<" New Balance:"<<balance<<endl;
        }
        else{
            cout<<"Invalid amount."<<endl;
        }
    }

    void withdraw(double amount){
        if(amount>0&&amount<=balance){
            balance-=amount;
            cout<<"Amount Withdrawn:"<<amount<<" New Balance:"<<balance<<endl;
        }
        else{
            cout<<"Invalid amount."<<endl;
        }
    }

    void displaybalance(){
        cout<<"Account:"<<accountnumber<<" Balance:"<<balance<<endl;
    }

    ~bankAccount(){
        cout<<"Account:"<<accountnumber<<" with balance:"<<balance<<" has been closed."<<endl;
    }
};

int main(){
    bankAccount b(101,40000);
    b.deposit(10000);
    b.withdraw(5000);
    b.displaybalance();
}