#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, ans=0;
    cin>>n;
    int i=0;
    while(n!=0){
        int digit =n%10;
        cout<< digit<<" digit value"<<endl;
        if(digit==1){
            ans=ans+pow(2,i);
            cout<<ans<<" middle ans"<<endl;
        }
        n=n/10; //if we find modulus then e will write this line 1/10 = will 0
        cout<<n<<" value of n"<<endl;
        i++;
        cout<<i++<<" Value of i"<<endl;
    }
    cout<<ans<<" final ans"<<endl;
}