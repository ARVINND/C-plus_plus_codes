#include<iostream>
using namespace std;

void update(int arr[], int n){                       // function            2nd
    cout<<endl<<"Inside the function"<< endl;                               //3rd



    // updating arrays first element 
    arr[0] =120;
    arr[2]=999;
    for(int i=0; i<3; i++){                          // yha se              4th
        cout <<arr[i] <<" ";

    }cout<<endl;                                     // yha tk use for print       5th
    cout<<"going back to main function  "<<endl;                     // 6th

}
int main(){
    int arr[3]={1,2,3};                      // 1st
    update(arr, 3);     // call update      

    //printng the arrray
    cout<<endl<<"printing in main function"<<endl;
    for(int i=0; i<3; i++){              // for print the array        7th execute
        cout <<arr[i]<<" ";    // this space will matter is result
    }
    cout<<endl;

    return 0;
}
