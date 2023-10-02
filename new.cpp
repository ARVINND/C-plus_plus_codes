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
    return 0;
}