/* map is a datastructure in which data store in form of key and value
key are unique and one key only point one value
value may same but key is not same..
*/
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;
    m[1]="babbar"; // m[1] is key and babbar is value
    m[2]="love";
    m[13]="kumar";
    m.insert({5,"bheem"}); // new way to insert the element
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<i.second<<endl;  // i.first use for print key and i.second use for print vlaue
    }
    // ans will came only orderd way .
    cout<<"finding 13  --"<<m.count(13)<<endl; // to know about the element present or not
    cout<<"finding -13  --"<<m.count(-13)<<endl;
    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<i.second<<endl;  // i.first use for print key and i.second use for print vlaue
    }
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
}
// complexity o(logn)

}