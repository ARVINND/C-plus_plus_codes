#include<iostream>

using namespace std;
// class creation
class Hero {
    public: //it will provide the facilities to access these things inside and outsider
    // properties 
    char name[100];
    char level;
    
    // to access the private part we will use getter and setter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    // setter
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
    private:
    int health;
    //  it can access only inside the classs
    char age;
    // if here we will create any function then we can access it in class.
    void print(){
        cout<<age<<endl;
    }

};

int main(){

    // creation object  
    Hero tiger;
    cout<<"tiger health is : "<<tiger.getHealth()<<endl;
    // if we want to access the class then we will use . operator/
    //tiger.health=48;
    cout<<"size of "<<sizeof(tiger)<<endl;

    //cout<<"health is: "<<tiger.health<<endl;
    return 0;

}