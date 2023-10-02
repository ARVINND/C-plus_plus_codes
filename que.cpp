/// let an array and find max and min value from the array.
#include<iostream>
using namespace std;
int getMin(int num[], int n){        // function for minimum value
    int min=INT_MAX;
    for(int i=0; i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    //returning min value
    return min;
}

int getMax(int num[], int n){              // function for maximum value .. int num[] is the array..  and int n is the size of array
    int max=INT_MIN;                          // from int range int_min  is the minimun value of int range .., here min vlaue is by default . it will min
    for(int i=0; i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    //returning max value
    return max;
}
int main(){
    int size ;            // size of the array
    cout << "Enter the size of array"<< endl;
    cin >>size;
    int num[100];                   // limit of size of array that are given in the input
    // Taking input in array
    for(int i=0; i<size; i++){
        cin>>num[i];              // it is for input in array element 
    }
    cout<<"Maximum value is"<<getMax(num,size)<<endl;
    cout<<"Minimum value is"<<getMin(num,size)<<endl;

    return 0;
}
//after run the code first we have to give size of array and then next line we will give element of the array.
// and if we have give size 5  then we enter 7 value then we will get comparision between into 1 to 5 elements.