//Operator overloading
#include<iostream>
using namespace std;

class complexNum{
    private:
    int real,imag;

    public:
    complexNum(int r1=0,int i1=0 )
    {
        real=r1;
        imag=i1;
    }
    complexNum operator + (complexNum const &obj){
        complexNum result;
        result.real=real+obj.real;
        result.imag=imag+obj.imag;
        return result;
    }
    void print(){
        cout<<real<<" +i"<<imag<<endl;
    }
};
int main(){
    complexNum c1(2,4),c2(3,5);
    complexNum c3=c1+c2;
    c3.print();
    return 0;

}