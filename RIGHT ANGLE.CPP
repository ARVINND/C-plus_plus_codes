#include <iostream>
using namespace std;
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Please enter the number"<<endl;
    cin >> a >> b >> c;
    if ((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a)  || (a*a)+(c*c)==(b*b)){
        cout << "The sides form a triangle" << endl;
    }
    else
        cout << "The sides do not form a triangle." << endl;
    return 0;
}