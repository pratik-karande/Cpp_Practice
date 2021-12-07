#include <iostream>
using namespace std;

class Employee{
    public:
    Employee()
    {
        cout<<"default constructor called"<<endl;

    }
    void display(){
        cout<<"Done"<<endl;
    }

};
int main(){
    Employee e1;
    e1.display();

    return 0;
}