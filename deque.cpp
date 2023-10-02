// according to this we can starting and ending push and pop operation(insertion and deletion)
// here is no continueous memory location .but vector and array having contiguous memory location
// it is dynamic i.e. size can increase
// random access possible by using at operation.
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;  /// here is creation of deque
    d.push_back(1);  // from back we enter 1
    d.push_front(2); // from front we enter 2

    // now we will go for print 
    /*for(int i:d){         // i is iteration and d is came for deque
        cout<<i<<" ";
    }
    /*d.pop_back();   // pop from back
    cout<<endl;

    for(int i:d){
        cout<<i<<" ";
    
    d.pop_front();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    */
    cout<<endl;
    cout<<"Print first index element:  "<<d.at(1)<<endl;
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;  
    cout<<"Empty or not "<<d.empty()<<endl;  // o means false because in this deque having two element already.
    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);  // for deletion we heve to tells about the range so this line for delete for ist element
    cout<<"After erase "<<d.size()<<endl;
    // yha size erase ke bad 0 ho jata h and jitni memory allocate deque ho hoti h wo staring and ending ki same hoti h
    

}