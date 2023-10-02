//to find the length of string 
 #include<iostream>
using namespace std;

    int getLength(char name[]){  // findlenght is function and name is array name 
        int ginti =0;      // ginti krne ke liye , ginti ek integer type variable hai
        for(int i=0; name[i]!='\0'; i++){
            ginti++;        // increment of ginti
        }
        return ginti;
    }
int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
   // name[2]='\0'; // null character enter
    cout <<"your name is ";
    cout<<name <<endl;
    
    cout<<"length: "<<getLength(name)<<endl;
    return 0;
}