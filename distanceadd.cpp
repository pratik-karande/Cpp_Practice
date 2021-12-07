#include <iostream>
using namespace std;

class addn{
    private:
    float x1;
    float x2;
    public:
    float addition(float x1,float x2){
        this->x1=x1;
        this->x2=x2;
        //cout<<" The sum of distances is "<<x1+x2<<"km"<<endl;
        return x1+x2;
    }


};
int main(){
    cout<<"Input the distance values in km: "<<endl;
    float X,Y;
    cin>>X>>Y;
    addn a1;
    cout<<a1.addition(X,Y)<<"km is the total distance"<<endl;
    return 0;
}