#include<iostream>
using namespace std;

class Employee{
    private:
    float salary;

    public:
    void setSalary(float s){
        salary=s;
    }
    float getsalary(){
        return salary;
    }
};
int main(){
    Employee e1;
    e1.setSalary(50000);
    cout<<e1.getsalary()<<endl;
    return 0;
}