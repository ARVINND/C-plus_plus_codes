#include<iostream>
#include<array> // it is for STL array
using namespace std;
int main(){
    int basic[3]={1,2,3};       // baisc is name of array and it is normal array       
    array<int,4> a={1,2,3,4};    //STL array  declare(int is datatype, 4 is size of array, a is name of array) 
 // array STL ki implimentation fixed size ke static array se hoti h (uper wale i.e. basic)
    int size=a.size();           // to find the size of array
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;             // to access directly
    }
    cout<<"Element at 2nd index: "<<a.at(2)<<endl;  // at is the opereation to find the index
    cout<<"empty or not: "<<a.empty()<<endl;
    cout <<"First Element "<<a.front()<<endl;
    cout<<"last Element  "<<a.back()<<endl;

}