// here we can see how the pointer is being passed in a function
#include<iostream>
using namespace std;

void print(int *p){//here we have made a function of name print and initilize an integer that name p
    cout<<*p<<endl;    // print the p
}

void update(int *p){  // we are passing a pointer into update 
    //p=p+1;
    *p=*p+1;        // it means we update the value that are present in other memory location
}



// here we are trying to print sum of array...
int getSum(int arr[],int n){
    cout<<endl<<"size of array  "<<sizeof(*arr)<<endl;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;

}


int main(){
   /* int value=5;        // here we are making integer type variable
    int *p=&value;        //here address of value are shifting into p

    // here we calling the function
   // print(p);
    cout<<"Before "<<*p<<endl;
    update(p);
    cout<<"After "<<*p<<endl;

*/

    int arr[5]={1,2,3,4,5};
    cout<<"sum is "<<getSum(arr,5)<<endl;
    return 0;
}