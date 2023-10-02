#include<iostream>
using namespace std;
int main(){
    int arr[10]={23,122,41,67}; 

    cout<<"Address of first element "<<arr<<endl;
    
    cout<<"address of first memory block is "<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr)+1<<endl;
    cout<<"8th "<<arr[2]<<endl;
    cout<<"9th "<<*(arr+2)<<endl;


// we can say it is formula ->  arr[i]=*(arr+i) or i[arr]=*(i+arr)
    int i=3;
    cout <<i[arr]<<endl;

    


    return 0;
}