#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;
    cout<<"address of num is  " <<&num<<endl; // &num is used for address of num and num ke address ko store krne ka kam pointer krta h
    

//A pointer is a variable that stores the memory address of another variable as its value
/* int *p is syntax of create pointer . 
int *p=&num;           here &num shows address of num and address of is store in pointer p.
*p means value of address pointed by num.
ptr is derived variable
*/

int *ptr =&num;
cout<<"address is : "<<ptr<<endl;   // it will print the address of num
cout<<"value is :"<<*ptr<<endl;     // it will print value of address
cout<<endl;

double d=4.3;
double *p2=&d;                          // &d show address of d
cout<<"address of d "<<p2<<endl;
cout<<"value of d "<<*p2<<endl;
cout <<"size of integer is  "<<sizeof(num)<<endl;
cout <<"size of pointer is  "<<sizeof(ptr)<<endl;   // in maximum time ans of pointer will be 8.. and also 4 can came...
cout<<"Size of pointer is "<<sizeof(p2)<<endl;
return 0;
}