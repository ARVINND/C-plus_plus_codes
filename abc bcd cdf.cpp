
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char start ='A'+row+col-2;
        while(col<=n){
            cout<<start<<" ";
            col=col+1;
            start=start+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
}
