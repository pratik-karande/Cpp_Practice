#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
using namespace std;

struct Employee
{
    int empno;
    char empname[20];

};
int main(){
    struct Employee e;
    FILE *fp;
    int eno;
    char ename[20],c;
    int ch;
    while (1)
    {
        cout<<"\n\n 1.Add Records in the file";
        cout<<"\n2.Search record by employee no.";
        cout<<"\n3.Search Employee whose name is 'XYZ'";
        cout<<"\n4.Display all records";
        cout<<"\n5.Search record by employee name";
        cout<<"\n6.exit";
        cout<<"\n\n Enter your choice";
    cin>>ch;
    switch (ch)
    {
        case 1:
        fp=fopen("Employee.txt","ab");
        while(1){
            cout<<"\nEnter Employee number: ";
            cin>>e.empno;
            fflush(stdin);
            cout<<"\nEnter Employee name: ";
            cin>>e.empname;
            fflush(stdin);

            fwrite(&e,sizeof(e),1,fp);
            fflush(stdin);
            cout<<"\n\nDo you want to continue?(Y/N): ";
            cin>>c;
            if(c=='n'||c=='N')
                break;
        }
        fclose(fp);
        break;

        case 2:
        fp=fopen("Employee.txt","rb");
        cout<<"\nEnter employee number: ";
        cin>>eno;

        while(fread(&e,sizeof(e),1,fp))
        {
            if(eno==e.empno){
                cout<<"\n\t"<<e.empno<<":"<<e.empname;
                break;
            }
        }
        fclose(fp);
        break;

        case 3:
        fp=fopen("Employee.txt","rb");
        while(fread(&e,sizeof(e),1,fp)){
            if(strcmp(e.empname,"XYZ")==0){
                while(1){
                    cout<<"\n\t"<<e.empno<<":"<<e.empname;
                    break;
                }
            }
        }
        fclose(fp);
        break;

        case 4:
        fp=fopen("Employee.txt","rb");
        while(fread(&e,sizeof(e),1,fp)){
            while(1){
                cout<<"\n\t"<<e.empno<<":"<<e.empname<<endl;
                break;
            }
        }
        fclose(fp);
        break;

        case 5:
        fp=fopen("employee.txt","rb");
        cout<<"\n Enter Employee Name: ";
        cin>>ename;
        while(fread(&e,sizeof(e),1,fp)){
            if(strcmp(ename,e.empname)==0)
            {
                while(1){
                    cout<<"\n\t"<<e.empno<<":"<<e.empname;
                    break;
                }
            }
        }
        fclose(fp);
        break;

        case 6:
        exit(0);
    
    default:
        cout<<"\nInvalid Choice";
        break;
    }
    }
    return 0; 
}
