// 2 dimens array for same row and column
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int** arr=new int*[n];           // arrays ko pointer ke ander insert ker rhe h
    for(int i=0; i<n;i++){        // here we are creating array in pointer
        arr[i]=new int[n];
    }
    //creation done


    // for taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];

        }
    }//for print
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";

        }cout<<endl;
    }

}