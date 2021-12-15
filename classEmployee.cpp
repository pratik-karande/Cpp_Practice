#include<iostream>
using namespace std;

class Employee{
    private:
    int id;
    string name;
    float salary;

    public:
    void insert(int i,string n,int sal){
        id=i;
        name=n;
        salary=sal;

    }

    void display(){
        cout<<id<<" "<<name<<" "<<"Rups."<<salary<<endl;

    }

};
int main(){
    Employee e1;
    Employee e2;
    e1.insert(200,"Pratik",40000 );
    e2.insert(201,"Pradnyesh",50000);
    e1.display();
    e2.display();

    return 0;
}