#include <iostream>    
using namespace std;    
class Animal {    
    public:    
void eat(){      
cout<<"Eating...";      
    }        
};     
class Dog: public Animal      
{      
 public:    
 void eat()      
    {           
        cout<<"Eating bread...";      
    }      
};    
int main() {    
   Dog d = Dog();      
   d.eat(); 
   Animal a=Animal();
   a.eat();   
   return 0;    
} 