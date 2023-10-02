#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constractor
    Node(int data){
        this->data=data;
        this->next=NULL;

    }

};

void InsertATHead(Node* &head,int d){ // head ko node ke ander bheja gya h and int data enter kr rhe h/
   
    Node*temp=new Node(d);  //new node create
    temp->next=head;      // temp name ke next ko head se point kra rhe h
    head=temp;// but new block front pe add hua to head new block se point hona chaiye so it exist
} 

void InsertAtTail(Node* &tail, int d){
    // new node create
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;

}



void print(Node* &head){ // original linked list ke ander changes ke liye &head aya h and it works as reference. to mai node me koi changes ni kena chahta.
    Node *temp=head;     // it will point on head
    while (temp !=NULL){
        cout<<temp->data<<" "; // print the value of temp
        temp=temp->next;       // temp equal to temp ka next
        
    }
    cout<<endl;
}

int main(){
    // created a new node
    Node* node1=new Node (10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointed to node1
    Node* head =node1; // it points first node of linked list
    Node* tail=node1; // it points also first node of linked list
    print(head);
    InsertAtTail(tail,12); // insertathead ke ander head ko pass kiya and 12 value pass kiya gya h .
    print(head);        // call kr rhe
    InsertAtTail(tail,15);// insert kr rhe

    print(head);   // call kr rhe
    InsertAtTail(tail,48);  //insert
    print(head);     // call kr rhe
    
    return 0;
}