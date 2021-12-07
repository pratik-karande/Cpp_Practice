#include <iostream>
using namespace std;

class Employee{
    public:
    void employee(){
        cout<<"default constructor called"<<endl;

    }

};
int main(){
    Employee e1;
    Employee e2;
    e1.employee();
    e2.employee();

    return 0;
}