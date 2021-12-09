#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
    ifstream fin1,fin2;
    ofstream fout;
    char ch;
    // char ch, file_name1[20],file_name2[20],file_name3[30];
    // cout<<"\nEnter first file name with extension '.txt' : ";
    // gets(file_name1);
    // cout<<"\nEnter second file name with extension '.txt' : ";
    // gets(file_name2);
    // cout<<"\nEnter third file name with extension '.txt' : ";
    // cout<<"\n(while will store the contents of \n First and second file)    : ";
    // gets(file_name3);

    fin1.open("file1.txt");
    fin2.open("file2.txt");
    fout.open("file3.txt");
    // if(fin1==NULL||fin2==NULL)
    // {
    //     cout<<"\nINvalid file name"<<endl;
    //     exit(EXIT_FAILURE);
    // }

    while(fin1.eof()==0){
        fin1>>ch;
        fout<<ch;
    }
    while(fin2.eof()==0){
        fin2>>ch;
        fout<<ch;
    }
    cout<<"\nTWo files have been merged into "<<"file3.txt"<<"FIle successfully!!!";
    fin1.close();
    fin2.close();
    fout.close();
    return 0;
}
