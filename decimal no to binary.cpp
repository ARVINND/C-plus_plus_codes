#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1; // input no will convert in binary form then and with 1 then store in bit
        cout<<"bit "<<bit<<endl;    // for print 
        ans=(bit*pow(10,i))+ans; // 10 ki power i
        cout<<"ANS "<<ans<<endl;  // for ans print
        n=n>>1;             // for right shift of binary no
        cout<<n<<endl;  //for print
        i++;          // for increment in i
    }
    cout<<"Answer is "<<ans<<endl;
}
// range of int is  [-2 power 31, 2 power 31-1]