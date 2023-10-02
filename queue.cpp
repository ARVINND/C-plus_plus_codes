/*queue means line that is work on the concept of first come first serve
i.e. first in first out


*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;  // here we create queue of string type
    q.push("arvind");
    q.push("kumar");
    q.push("verma");
    cout<<"First element "<<q.front()<<endl; 
    q.pop();
    cout<<"First element "<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;


}

