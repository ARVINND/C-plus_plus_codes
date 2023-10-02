#include<iostream>
using namespace std;
int main(){
    int a[20]={1,2,3,5};    
    cout<<&a[0]<<endl;   //& it always shows loction
    cout<<&a<<endl;      
    cout<<a<<endl;

    int *p=&a[0];
    cout<<"pointer: "<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;  // here we will find address of p
}