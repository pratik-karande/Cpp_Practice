#include<iostream>
#include<fstream>
#include <string.h>
using namespace std;
int main(){
    ifstream fin;
    fin.open("file1.txt");
    ofstream fout;
    fout.open("file2.txt");
    char ch;
    while(!fin.eof()){
        fin.get(ch);
        if(ch>=97&&ch<=122){
            ch=toupper(ch);

        }
        else if(ch>=65&&ch<=90){
            ch=tolower(ch);
        }
        fout<<ch;
    }
    cout<<"\nData has been copied";
    fin.close();
    fout.close();
    return 0;
}