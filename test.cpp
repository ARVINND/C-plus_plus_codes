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
    }

};

void insertathead(Node* &head,int d){  // sabhi changes usi linked list ke ander ho isliye &head ko liya gya h
    // new n0de create and insert at head
    Node* temp=new Node(d); // node ka name temp hai'
    temp-> next=head;
    head=temp;

}
// function to print all node of  the linked list
void print(Node* &head){          // reference ni lena chahta isliye reference le rhe h taki sabhi changes main list me ho
    Node* temp=head;
    while (temp !=NULL)
    {
        /* code */
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){

    Node* node1=new Node(10);  //   node CLass ka object 'node1' create kr rhe h and new node created
    cout<<node1->data<<endl; // node1 ke data ko print kr rhe h
    cout<<node1->next<<endl; // node1 ke next ko print kr rhe h
    
    Node* head=node1;
    print(head);
    insertathead(head,12);
    print(head);
    insertathead(head,51);
    print(head);
    return 0;
}