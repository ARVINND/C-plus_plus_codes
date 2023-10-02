// code for power of 2 
#include<iostream>
using namespace std;
int power(int n){
    // base case we always write first
    if(n==0)
        return 1;
    //recursive relation
    int smallproblem=power(n-1);
    int biggerproblem= 2*smallproblem;
    return biggerproblem;
}
int main(){
    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
    return 0;
}