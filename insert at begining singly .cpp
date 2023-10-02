#include<iostream>
using namespace std;

class Node{     // node having data and address
    public:
    int data;
    Node* next;         // node* type pointer jo ki next ko point kr rha h and address store kr rha h

// constructor below  // data dalne ke liye
    Node (int data){
    this->data=data; // this ka data equal to data
    this->next=NULL;// this ka next equal to null

};






int main(){

    Node* node1=new Node(10);  //   node CLass ka object 'node1' create kr rhe h and new node created
    cout<<node1->data<<endl; // node1 ke data ko print kr rhe h
    cout<<node1->next<<endl; // node1 ke next ko print kr rhe h

    return 0;
}