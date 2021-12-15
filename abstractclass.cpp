#include<iostream>
using namespace std;

class Shape{
    protected:
    int width;
    int height;

    public:
    virtual int getArea()=0;
    void setWidth(int w){
        width=w;
    }
    void setHeight(int h){
        height=h;
    }

};
class Rectangle:public Shape
{
    public:
    int getArea(){
        return (width*height);
    }
};
class Triangle:public Shape
{
    public:
    int getArea(){
        return (width*height)/2;
    }
};
int main(){
    Rectangle rect;
    Triangle tri;

    rect.setHeight(5);
    rect.setWidth(6);
    cout<<"total area of rectangle: "<<rect.getArea()<<endl;

    tri.setHeight(2);
    tri.setWidth(5);
    cout<<"total area of triangle: "<<tri.getArea()<<endl;

    return 0;
}