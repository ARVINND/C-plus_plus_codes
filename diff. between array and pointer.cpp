#include<iostream>
using namespace std;
    
int main(){
    int arr[10]={23,122 ,41,67};
    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl; // if we print for arr then size will 40 bytes 
    cout<<"first "<<sizeof(*temp)<<endl;     // it will print size of integer
    cout<<" 2nd "<<sizeof(&temp)<<endl;






    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;      // if we print for pointer then size will 4 bytes
    cout<<sizeof(*ptr)<<endl; 
    cout<<sizeof(&ptr)<<endl;


    return 0;
}