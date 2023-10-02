#include<iostream>
using namespace std;
class animal{
   public:
    int no;
    char veraity;
    char decies;
    char quality;
};
int main(){
    animal cow;
    cow.no=40;
    cow.veraity='black';
    cow.decies='fever';
    cow.quality='giveMilk';
    cout<<cow.decies<<endl;
    cout<<"size of animal " <<sizeof(animal)<< endl;
    return 0;
}