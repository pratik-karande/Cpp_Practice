#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<100;i++)
    {
        if(i%3==0){
            continue;
        }
        cout<<i<<" is divisible by 3"<<endl;
    }
    return 0;
}