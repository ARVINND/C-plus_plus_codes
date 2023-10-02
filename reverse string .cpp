// reverse string means ulta sting print honi chaiye
#include<iostream>
using namespace std;
void revers(char name[], int n){
    int s=0,e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int reverseString(char name[]){
    int reverse=0;
    for(int i=0; name[i]!='\0'; i++){
        reverse++;
    }
    return reverse;
}
int main(){
    char name[20];
    cout<<"Please enter your name "<<endl;
    cin>>name;
    cout << " your name is ";
    int img=reverseString(name);
    cout<<"length: "<< img<<endl;
    revers(name,img);
    cout<<"your name is ";
    cout<<name<<endl;
    return 0;
}