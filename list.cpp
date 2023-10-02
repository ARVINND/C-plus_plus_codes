/* list ki implimentation doubly linked list ki wjh se hoti h
doubly link list ka used krke list bnaya gya h.
it having 2 pointer , one back and one back
we can not access directly we have to traverse one by one to reach the target.
*/
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int>n(5,100); // 5 element initilize by 100
    cout<<"Printing n "<<endl;
    for(int i:n){
        cout<<i<<" ";

    }
    cout<<endl;  // for new line
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());// it delete the element from front

    cout<<"After erase "<<endl;
    for(int i:l){
        cout<<i<<" ";

    }
    cout<<"size of list "<<l.size()<<endl;  /// to print the size of list

}