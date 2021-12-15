#include<iostream>
using namespace std;
void value(int x){
    try
    {
        if(x>10){
            throw x;
        }else{
            throw 'x';
        }
    }
    catch(int x){
        cout<<"This is an integer"<<endl;
    }
    catch(char x)
    {
       cout<<"This is a character"<<endl;
    }
    
}
int main(){
    value(4);
    value('c');
}