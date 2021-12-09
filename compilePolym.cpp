//Function overloading
#include<iostream>
using namespace std;
class A{
    public:
    void test(int j){
        cout<<"the value of int is: "<<j<<endl;
    }
    void test(char const* ch){
        cout<<"The char value is: "<<ch<<endl;
    }
};
int main(){
   A a;
    a.test(20);
    a.test("HEllo");
    return 0;

}