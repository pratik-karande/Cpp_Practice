#include <iostream>
using namespace std;

class Vote{
    public:
    string s_candidates;
    int j_votes;
};
void electionResult(Vote* arr){
    // int total_votes=0;
    // for(int i=0;i<5;i++){
    //     total_votes=total_votes+arr[i].j_votes;

    // }
    // cout<<":Result of elections:"<<endl;
    // cout<<"Name of candidates"<<"\t"<<"Votes recieved"<<"\t"<<"percentage"<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i].s_candidates<<"\t\t\t";
    //     cout<<arr[i].j_votes<<"\t\t";
    //     cout<<(arr[i].j_votes*100)/total_votes<<"%"<<endl;
    // }
    int j_max=INT8_MIN,j_count=0;
    int j_index[5]={0};
    for(int i=0;i<5;i++){
        if(arr[i].j_votes>j_max){
            j_max=arr[i].j_votes;
        }
    }
    for(int i=0;i<5;i++){
        if(arr[i].j_votes==j_max){
            j_index[j_count]=i;
            j_count++;
        }
    }
    if (j_count==1){
        cout<<"The winner is "<<arr[j_index[j_count-1]].s_candidates<<"!!!!"<<endl;

    }else{
        cout<<"The is tie between: "<<endl;
        for(int i=0;i<j_count-1;i++){
            cout<<arr[j_index[i]].s_candidates<<",";
            cout<<arr[j_index[j_count-1]].s_candidates<<",";
            cout<<"All are winners\n";

        }
    }
    return;
}
int main(){
    string s;
    int j;
    Vote arr[5];
    cout<<"Enter candidates last name, there are five candidates\n";
    for(int i=0;i<5;i++){
        cout<<"enter candidate "<<i<<" last name\n";
        cin>>s;
        arr[i].s_candidates=s;
        cout<<"enter no of votes recieved by candidate "<<i<<endl;
        cin>>j;
        arr[i].j_votes=j;

    }
    electionResult(arr);
    return 0;

}