// inline function= it is used to reduse the function calls overhead.
#include <iostream>
using namespace std;

inline int getmax(int a ,int b){  // here inline function but approx 3 line  code we can write in inline .
    return(a>b)?a:b;
}

int main(){
    int a=1;
    int b=2;
    int ans=0;
    ans=getmax(a,b);
    cout<<ans<<endl;
    a=a+3;
    b=b+1;
    ans=getmax(a,b);
    cout<<ans<<endl;
    return 0;
}