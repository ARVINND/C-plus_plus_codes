
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //for space print....
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        //star print krne ke liye....
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
}
