#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start=0;
    int end= size-1; // for last reach index
    int mid =start+(end-start)/2; // starting index start with 0 and last index will divid by 2 hoga
    while(start<=end){             //here start end se chota hona chaiye ya baraber hona chiaye
        if(arr[mid]==key){        // ydi mid index ki value searching key ke baraber h to return mid that means result
            return mid;
        }
        // go to right wala part
        if(key>arr[mid]){
            start=mid+1;     // mid key ke right part me jayege
        
        }
        else{
            end=mid-1;  //  mid key ke left side jayege
        }
        mid=start+(end-start)/2; 

    }
    return -1;  // value is not found

}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int index=binarySearch(even,6,18);  // valriable binaySearch ko index ke ander bheja ja rha h
    cout<<"index of 12 is: "<<index<<endl; // indesx ko print kr rhe h
    int index1=binarySearch(odd,5,11);
    cout<<"index value is "<< index1<<endl;
    return 0; //does not return any vlaue
}
//mid=(start+end)/2 then ydi aisi value cerate ho jaye ho int ke range 2^31-1 se baher ho then problem will create
// so mid=(start+end)/2 == start+(end-start)/2
