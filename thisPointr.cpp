#include <iostream>
using namespace std;

class Employee{
    private:
    int id;
    string name;
    float salary;

    public:
    void employee(int id,string name,float salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main(){
    Employee e1;
    e1.employee(200,"Pratik",40000);
    e1.display();
    e1.employee(201,"Pradnyesh",45000);
    e1.display();

    return 0;

}