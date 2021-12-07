#include <iostream>
using namespace std;

class Employee{
    public:
    Employee()
    {
        cout<<"default constructor called"<<endl;

    }

};
int main(){
    Employee e1;
    Employee e2;

    return 0;
}