//how many times element is frequenty caming
//size of string is 8 bytes
//size of character is 1 byte
#include<iostream>
using namespace std;

char getMax0ccCharacter(string s){
    int arr[26]={0};
    //create an array of count of characters
    for (int i=0; i<s.length();i++){
        char ch=s[i];
        //lower case

        int number =0;
        number=ch-'a';
        arr[number]++;
    }

    // find maximum occerance character
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalAns='a'+ans;
    return finalAns;
}
int main(){
    string s;
    cin>>s;
    cout<<getMax0ccCharacter(s)<<endl;
    return 0;
}