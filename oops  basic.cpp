#include<iostream>
using namespace std;
// here define class
class Human{


     
// properties of class
        // impty class having one byte space
    // char name[100]; //it is datatype used for store single character 
    public:     // public means we can access it from anywhere
    int health;        // also data type use for integer value
    // private :  // it will access only in class level 
    char level;   //  it is datatype used for store single character
    void print(){
        cout<<level<<endl;
    } 
// if we want to access properties like health and level we will use "." operator
};
// we can create class any other file and we can use here by #define "file_name"
int main(){
    // define object 
    Human arvind;

    arvind.health=24;
    arvind.level='A';
    // cout<<"size  "<< sizeof(arvind)<<endl;
//  if we want to access properties like health and level we will use "." operator
    cout<<"health  "<<arvind.health<<endl;
    cout<<"level  "<<arvind.level<<endl;
    
    
    
    return 0;
}
// access modifier are where we can access data member i.e. from inside, outside class
// access modifier are three types (public, private, protected) and bydefault access modifier are private