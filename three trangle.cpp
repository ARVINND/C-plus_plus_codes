
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int s=n-i;
        //print ist trangle
        while(s){
            cout<<" ";
            s=s-1;
        }
        // print 2nd trangle
        while(j<=i){
            cout<<j<<"";
            j=j+1;
        }
        int start = i-1;
        // 3rd trangle
        while(start){
            cout<<start;
            start=start-1;
        }
        i=i+1; 
        cout<<endl;
    }
    return 0;
}
