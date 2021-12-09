#include<iostream>
using namespace std;
class vehicle{
    public:
    void wheels(){
        cout<<"has four wheels"<<endl;
    }
};
class fourWheeler{
    public:
    void doors(){
        cout<<"has four doors"<<endl;
    }
};
class Car: public vehicle, public fourWheeler
{   public:
    void seats(){
        cout<<"Is a four seater"<<endl;
    }
};
int main(){
    Car obj;
    obj.wheels();
    obj.doors();
    obj.seats();
    return 0;


}
