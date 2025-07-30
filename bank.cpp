#include<iostream>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    double balance;
    protected:
    string accountHolderName;
    public:
    void setAccountDetails(int accNo,double bal,string name){
        accountNumber=accNo;
        balance=bal;
        accountHolderName=name;
    }
    void displayAccountDetails(){
        cout<<"Account Number:"<<accountNumber<<endl;
        cout<<"Balance:"<<balance<<endl;
        cout<<"Acoount Holder Name:"<<accountHolderName<<endl;
    }
};

class SavingsAccount:public BankAccount{
    private:
    double interestRate;
    public:
    void setInterestRate(int rate){
        interestRate=rate;
    }
    void displayInterestRate(){
        cout<<"Interest Rate:"<<interestRate<<endl;
    }
    void showAccountHolderName(){
        cout<<"Account Holder Name:"<<accountHolderName<<endl;
    }
};

int main(){
    SavingsAccount s;
    s.setAccountDetails(293,893084.34,"Dhruva");
    cout<<"Account Details:"<<endl;
    s.displayAccountDetails();
    s.setInterestRate(12);
    s.displayInterestRate();
    s.showAccountHolderName();
}