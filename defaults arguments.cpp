#include<iostream>
using namespace std;
void print(int arr[], int n, int start=0){ // here start =0 is default arguments and we have to start right most 
    for(int i=start; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
int main (){
    int arr[5]={1,4,7,8,9};
    int size=5; 
    print(arr, size,3);
    cout<<endl;
    print(arr, size);

    return 0;
}