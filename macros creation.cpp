#include<iostream> //it is preprocessor directory  i.e. jo bhi file demand karege wo lake insert kr dega
// #define          use for macro creation
// macro= a pice of code in a program that is replaced by vlaue of macro
using namespace std;
# define PI 4.15
int main(){
    int r=5;
    //double pi=3.14;
    int area=PI*r*r;
    cout<<"Area is "<<area<<endl;
    return 0;
}