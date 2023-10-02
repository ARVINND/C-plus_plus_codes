/* set having unique element i.e. repetetion not allow
 i.e. 5 is 10 times but set stores only one times.
if we are using BST then we can only insert or delete the element not modify
and element are access in sorted orderd

set is slow than the unorderd set when we access the element then element cames in unsorted mode.
*/

#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0); // complexity will O(logn)
    s.insert(0);
    s.insert(0);
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;

    set<int>::iterator it=s.begin();  // for delete i index elment
    it++;
        s.erase(it);

    for(auto i:s){
        cout<<i<<endl;
    }
cout<<endl;

cout<<"5 is present or not "<<s.count(5)<<endl;
set<int>::iterator itr=s.find(5);
for(auto it=itr; it!=s.end();it++){
    cout<<*it<<" ";
    cout<<endl;

}
    
    

}