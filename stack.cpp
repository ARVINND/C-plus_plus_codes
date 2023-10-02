// stack works on principal last in first out or first in last out
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("i'm");
    s.push("arvind");
    s.push("Verma");
    cout<<"top Element-->"<<s.top()<<endl;
    s.pop();// use for delete the element from the stack
    cout<<"Top Element--> "<<s.top()<<endl;
    cout<<"size of stack "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;
}