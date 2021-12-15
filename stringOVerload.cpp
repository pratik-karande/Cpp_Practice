#include<iostream>
using namespace std;

class strn{
    private:
  string s1;
     public:
     strn(string s2){
         s1=s2;
     }
     void operator +(strn s){
    string s3=s1+s.s1;
    cout<<s3<<endl;
     }

};
    int main(){
        strn obj("Pratik");
        strn obj1("Karande");
        obj+obj1;

       return 0;  
    }
   
    

