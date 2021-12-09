//Count character words and lines
#include <iostream>
#include <fstream>
#include<string.h>
#include<cstdlib>
using namespace std;
int main(){
    int noc=0;
    int now=0;
    int nol=0;
    FILE *fr;
    char ch;

    // cout<<"\nEnter source fiel name: ";
    //gets("file1.txt");
    fr=fopen("file1.txt","r");
    // if(fr==NULL){
    //     cout<<"\nInvalid file name\n No such file exist";
    //     exit(0);
    // }
    ch=fgetc(fr);
    while(ch!=EOF)
    {
        if(ch!=' '&&ch!='\n')
        {
            noc++;
        }
        if(ch==' '){
            now++;
        }
        if(ch=='\n'){
            nol++;
            now++;

        }
        ch=fgetc(fr);

    }
    fclose(fr);
    cout<<"Total characters: "<<noc<<endl;
    cout<<"Total words: "<<now<<endl;
    cout<<"Total lines: "<<nol<<endl;

    return 0;
}
