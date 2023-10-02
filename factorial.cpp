
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
using namespace std;
// factorial finder function
int fact(int n){
    int fact=1;
    for(int i = 1;i<=n;i++){

        fact=fact*i;  
    }
    return fact;
    
}

int nCr(int n,int r){
    int num = fact(n);
    int den = fact(r)*fact(n-r);
    return num/den;
}


int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout<<nCr(n,r);
}
