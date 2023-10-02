#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0, ans=0;
    while(n!=0){
        int digit=n%10; // 1%10 equal to 1    0%10=0
        cout<<digit<<" digit  value"<<endl;
        if(digit==1){
            ans=ans+pow(2,i);
            cout<<ans<<" ans value"<<endl;
        }
        n=n/10; // 1/10 equal to 0          0/10=0
        cout<<n<<" n value " <<endl;
        i++;
    }
    cout<<ans<<endl;
}