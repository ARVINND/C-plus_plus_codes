// Linked List is collection of nodes. and node = data+ next element address
//having single pointer
// first node called head node. and at starting it will null.
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;  /// pointer for next address presenting.
    Node(int data){          // constructor
        this->data=data; 
        this->next=NULL;
    }
 
};  
int main(){
    Node* node1=new Node(10); //here new node created . 10 is data
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    
    
    return 0;

}