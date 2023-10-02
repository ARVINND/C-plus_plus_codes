#include<iostream>
using namespace std;

void print(int *k){
    cout<<k<<endl;
}
int main(){
    int value=5;
    int *k=&value;
    cout<<print<<endl;
    return 0;
}