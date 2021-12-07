#include<iostream>
using namespace std;

enum week{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main(){
    week day;
    day=Friday;
    cout<<"Day: "<<day+1<<endl;
    return 0;
}