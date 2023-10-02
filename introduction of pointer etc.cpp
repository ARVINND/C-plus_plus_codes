/*1) name of the array is shows first location address of the array..
*/
#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,27,3,4,5,6,7,8,9,10};  // if we not enter any value in the array then it will  take garbage value autometicllay

    cout<<"Address of first element "<<arr<<endl;
    
 /*2) if i want to find out the address of first block of array so we use ~&" nameofarray "~.*/
    cout<<"address of first memory block is "<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr)+1<<endl;


    return 0;
}