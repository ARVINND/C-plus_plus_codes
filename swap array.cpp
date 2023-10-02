#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){             // for index traverse 0 to 7               /// i will first 0 ,2 ,4 , 6
        if(i+1<size){                  // this condition will true if the no. will indide the array
            swap(arr[i],arr[i+1]);              // i is current element and i+1 next element of the array

        }
    }
}

void printArray(int arr[], int n){           // for traverse one by one     //printArray is function    arr=array and n - no. of array
    for(int i=0; i<n; i++) {            // for traverse             //  i is the address of ist index
        cout<<arr[i]<<" ";
       // cout <<"value of arr[i]  "<<arr[i]<<endl;
    }cout<<endl;          /// for single line
}
int main(){
    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={11,13,9,76,43};

    swapAlternate(even,8); // ist run swap and then print 
    printArray(even,8);

    cout<<endl;
    swapAlternate(odd,5);
    printArray(odd,5);
    cout <<endl;
    return 0;
}
