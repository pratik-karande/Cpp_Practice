#include<iostream>
using namespace std;

class Account{
    public:
    int accNo;
    string name;
    static int count;

    Account(int accNo,string name){
        this->accNo=accNo;
        this->name=name;
        count++;

    }
    void display(){
        cout<<accNo<<" "<<name<<endl;
    }
};
int Account::count=0;
int main(){
    Account a1=Account(200,"Pratik");
    Account a2=Account(201,"Rahul");
    Account a3=Account(201,"Mahir");
    a1.display();
    a2.display();
    a3.display();

    cout<<"count is "<<Account::count<<endl;

    return 0;
}