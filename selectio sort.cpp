#include<iostream>
using namespace std;
int arr[5]={23,4,55,63,45};
int n;
int main(){
    for(int i=0; i<=(n-1); i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex]>arr[j])
                minIndex=j;
        }
        swap(arr[minIndex], arr[i]);
    }
}