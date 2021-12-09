#include<iostream>
using namespace std;

class Time{
    private:
    int j_hours;
    int j_minutes;
    int j_seconds;

    public:
    void setTime(void);
    void putTime(void);
    void addTime(Time T1,Time T2);
};
void Time:: setTime(){
    cout<<"TIME"<<endl;
    cout<<"-----------"<<endl;
    cout<<"Hours: "<<endl;
    cin>>j_hours;
    cout<<"Minutes: "<<endl;
    cin>>j_minutes;
    cout<<"Seconds: "<<endl;
    cin>>j_seconds;

}
void Time::putTime(){
    cout<<endl;
    cout<<"Time after add: "<<endl;
    cout<<j_hours<<":"<<j_minutes<<":"<<j_seconds<<":"<<endl;
}
void Time::addTime(Time T1,Time T2){
    this->j_seconds=T1.j_seconds+T2.j_seconds;
    this->j_minutes=T1.j_minutes+T2.j_minutes+this->j_seconds/60;
    this->j_hours=T1.j_hours+T2.j_hours+this->j_minutes/60;
    this->j_minutes%=60;
    this->j_seconds%=60;
}
int main(){
    Time T1,T2,T3;
    T1.setTime();
    T2.setTime();
    T3.addTime(T1,T2);
    T3.putTime();
    return 0;
}