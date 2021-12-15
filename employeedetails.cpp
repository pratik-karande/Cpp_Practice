#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("employee1.txt");
    int j_eno;
    string s_empname;
    int n=0;
    while(n<3){
        fout<<"EMployee no.: "<<endl;
        cout<<"Enter Employee no.: "<<endl;
        cin>>j_eno;
        fout<<j_eno<<endl;

        fout<<"Employee Name: "<<endl;
        cout<<"Enter employee name: "<<endl;
        cin>>s_empname;
        fout<<s_empname<<endl;
        n++;
    }
    return 0;
}