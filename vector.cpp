// vetor is dynamic array
// if the size of vector is full then vetor double of his size. i.e old vector will dumped and new vetor is created double size of old vector.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v; // when we male new vector then size of  vector is 0.
    vector<int> a(5,1); // 5 is size of vector and due to 1, all 5th element will asign with 1
    cout<<"print a "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    // vector ke ander a ko copy krne ke liye h

    vector <int> last(a);
    cout<<"print last "<<endl;
    for(int i:last){
        cout<<i<< "";

    }
    cout<<endl;
    
    cout<<"capacity-->"<<v.capacity()<<endl;  // for find size of the vector and print
    v.push_back(1);          // to insert the element in the vector
    cout<<"capacity--> "<<v.capacity()<<endl;  // to print the size of vector
    v.push_back(2);          
    cout<<"capacity--> "<<v.capacity()<<endl;
    v.push_back(3);      // when we try insert 3 then vector has no space then it double his space autometically
    cout<<"capacity--> "<<v.capacity()<<endl;   // to print the capacity will 4  // capacity tells how many space for element
    cout<<"size--> "<<v.size()<<endl; // to print the size will 3  // size tells how many element having
    cout<<"Element at 2nd Index "<<v.at(2)<<endl; // at operation is used for to find the index
    cout<<"front "<<v.front()<<endl;   /// to print the first element
    cout<<"back "<<v.back()<<endl;     // to print the second element
    cout<<"before pop"<<endl;    // to print the before pop
    for(int i:v){             // command to find the element in the vector
        cout<<i<<" ";  // to print the i

    }cout<<endl;
    v.pop_back();          /// command for pop the elemnet
    cout<<"after pop"<<endl;  // to print the after pop
    for(int i:v){          // loop for no. of element in the vector
        cout<<i<<" " ;
    }
    // when we clear the vector then the size (No. of element in the vector)of vector will zero not capacity(how many memory asign already)
    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();   // command for clear the vector
    cout<<"after clear size "<<v.size()<<endl;

}
