// pass by reference: no create new memory but pass by value me nyi memory create ho jati h.
#include<iostream>
using namespace std;
int func(int a){
    int num =a;
    int& ans=num;
    return ans;
}

void update2(int& n){   // int& is a referece variable
    n++;
}

void update1(int n){
    n++;
}

int main(){
    /*int i=5;
    int &j=i;             // creating reference variable 
    cout<<j++<<endl;
    cout<<i++<<endl;
    cout<<"Vallue of j "<<j<<endl;
    cout<<"Value of i "<<i<<endl;*/

    int n=5;
    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"After "<<n<<endl;
    func(n);
    return 0;
}