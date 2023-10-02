#include<iostream>
using namespace std;



int main(){

    int num=5;
    int a=num;
    cout<<"a before "<<num<<endl;
    a++;   
    cout<<"a after "<<num<<endl;
    



    int *p=&num;
    cout<<"before "<<num<<endl;
    (*p)++;     // *p means it taking about those element that are present the num's memory location
    cout<<"after "<<num<<endl;
 
 
    int *q=p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    // important concept
    int i=3;
    int *t=&i;
   // cout<<(*t)++<<endl;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"before t "<<t<<endl;
    t=t+1;   // it will take four byte space 
    cout<<"after t "<<t<<endl;

    return 0;
}