#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){   // arr is {2,5,6,-3,6,7,8,4,9,10} and size is 10 and key is user dependent
     for( int i=0; i<size; i++){

           if (arr[i]==key){
                return 1;         /// if got it
           }
     }
     return 0;           // if not found

}

int main(){
    int arr[10]= {2,5,6,-3,6,7,8,4,9,10};   // array in which the given element will search

    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;

    bool found=search(arr,10,key);           // function call   ... her arr is array and  10 is key and key is the value we will search
    if (found){
        cout <<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }

    return 0;
}