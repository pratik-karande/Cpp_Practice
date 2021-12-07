#include <iostream>
using namespace std;

class Employee{
    private:
    int id;
    string name;
    float salary;

    public:
    Employee(int i,string nam,float sal){
        id=i;
        name=nam;
        salary=sal;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main(){
    Employee e1=Employee(200,"Pratik",40000);
    e1.display();
    Employee e2=Employee(201,"Rahul",55000);
    e2.display();
    
    return 0;
}