#include <iostream>
using namespace std;

class bankAcc{
    private:
    string name;
    int accNo;
    string type;
    float balance;

    public:
    bankAcc(string name,int accNo,string type,int balance){
        this->name=name;
        this->accNo=accNo;
        this->balance=balance;
        this->type=type;
    }
    int deposit(int amount){
        this-> balance=balance+amount;
        return balance;
    }
    int withdraw(int amount2){
        if(balance==0){
            cout<<"Insufficient balance"<<endl;
        }else{
            this->balance=balance-amount2;
        }
        return balance;
    }
    void display(){
        cout<<"Name: "<<name<<endl<<"accno: "<<accNo<<endl<<"type of account: "<<type<<endl<<"Balance: "<<balance<<endl;
    }
};
int main(){
    string nm;
    cout<<"Enter Name: ";
    cin>>nm;
    int acn;
    cout<<"\nEnter acc no: ";
    cin>>acn;
    
    bankAcc bk=bankAcc("Abhishek",12345,"Savings",40000);
    bankAcc ck=bankAcc("Prashant",67890,"Current",0);
  
    if(nm=="Abhishek"){
    bk.display();
    char choice;
    cout<<"To deposit press A\n\nTo withdraw press B\n"<<endl;
    cin>>choice;
switch (choice)
{
case 'A' :
    int amt;
    cout<<"Enter amount to be deposited: ";
    cin>>amt;
    bk.deposit(amt);
    break;

case 'B':
    int amtt;
    cout<<"Enter amount to be withdrawn: ";
    cin>>amtt;
    bk.withdraw(amtt);
    break;


default:
    cout<<"Invalid input"<<endl;
    break;
}
    bk.display();
    return 0;
    }
    else if(nm=="Prashant"){
          ck.display();
          char choiice;
    cout<<"To deposit press A\n\nTo withdraw press B\n"<<endl;
    cin>>choiice;
switch (choiice)
{
case 'A' :
    int ammt;
    cout<<"Enter amount to be deposited: ";
    cin>>ammt;
    ck.deposit(ammt);
    break;

case 'B':
    int amttt;
    cout<<"Enter amount to be withdrawn: ";
    cin>>amttt;
    ck.withdraw(amttt);
    break;


default:
    cout<<"Invalid input"<<endl;
    break;
}
    ck.display();
    return 0;
    }

}