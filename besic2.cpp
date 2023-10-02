#include<iostream>
using namespace std;
// here define class
class Human{
   
 
    private:     
    int health;
    // private :  // it will access only in class level 
    public:
    char level;   //  it is datatype used for store single character
    void print(){
        cout<<level<<endl;
    } 
    // due to not able to access private variables we will use getter and setter
    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel( char ch){
        level=ch;
    }
};

int main(){
 
    Human arvind;
    cout<<"arvind health "<<arvind.getHealth()<<endl;

    arvind.setHealth(24);  // here we will set the health

    arvind.level='A';


    cout<<"health  "<<arvind.getHealth()<<endl;
    cout<<"level  "<<arvind.level<<endl;
    
    
    
    return 0;
}
