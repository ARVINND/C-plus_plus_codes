/*in priority queue when we enter the element and if we are going to access the element then we have
only two way 1) max heap   2) min heap
if i am using max heap then we find max element
and if i am using min then we find min element

*/

#include<iostream>
#include<queue>
using namespace std;
int main(){
    // here code for max heap
    priority_queue<int> maxi; // maxi is name of heap
    // here code for min heap
    priority_queue<int,vector<int>,greater<int>>mini;
    // push element in maxi heap
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size --> "<<maxi.size()<<endl;
    int n=maxi.size(); // maxi.size i.e. sabhi element ko n ke ander rakha gya h
    for(int i=0; i<n;i++){
        cout<<maxi.top()<<" ";  // for print the element 
        maxi.pop();  // for pop the element after print
    }
    mini.push(5);
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    cout<<"size --> "<<mini.size()<<endl;
    int m=mini.size(); // maxi.size i.e. sabhi element ko n ke ander rakha gya h
    for(int i=0; i<m;i++){
        cout<<mini.top()<<" ";  // for print the element 
        mini.pop();  // for pop the element after print
    }
    cout<<endl;
    cout<<"Empty or not "<<mini.empty()<<endl; // 1= true


}