#include<iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    void geta(){
        cout<<"enter value of a: "<<endl;
        cin>>a;
    }
};
class B: public A
{
    protected:
    int b;
    public:
    void getb(){
        cout<<"enter value of b: "<<endl;
        cin>>b;
    }
};
class C{
    protected:
    int c;
    public:
    void getc(){
        cout<<"Enter value of c: "<<endl;
        cin>>c;
    }
};
class D: public B, public C
{
    protected:
    int d;
    public:
    void mul(){
      geta();
      getb();
      getc();
      cout<<"multiplication of a b c is "<<a*b*c<<endl;

    }
};
int main(){
    D d1;
    d1.mul();
    return 0;
}