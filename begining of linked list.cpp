#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // constructor=in c++, a constructor is a special method that is invoked(lagu) automatically at the time of object creation.
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};
void insertathead(Node* &head,int c){
    Node* temp=new Node(c);
    temp->next=head;
    head=temp;
}
void print(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" . ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1;    //object
    node1=new Node(10); 
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    Node* head=node1;
    print(head);
    insertathead(head,13);
    print(head);


    return 0;
}