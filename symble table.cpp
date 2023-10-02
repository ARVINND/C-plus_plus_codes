//symble table cantent we cannot change 

#include<iostream>
using namespace std;
int main(){
    int arr[10];
    // below line provide error
    // arr=arr+1;
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1; // if we are going to increase ptr then array address of located by ptr will be increase
    cout<<ptr<<endl;
    return 0;
}
