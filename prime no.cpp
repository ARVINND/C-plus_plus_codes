//Prime numbers are numbers greater than 1. They only have two factors, 1 and the number itself.
#include<iostream>
using namespace std;
bool isprime(int n, int count=0){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Please enter the no to check prime or not"<<endl;
    cin>>n;
    if(isprime(n)){
        cout<<"it is a prime number"<<endl;
    }
    else{
        cout<<"it is not prime no"<<endl;
    }
    
   return 0;
}