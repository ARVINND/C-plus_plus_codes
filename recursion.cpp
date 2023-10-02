#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    
        return 1; // in factorial we have to always write return To know about when we have to stop
//  basecase is mandatory because when we call function then it will continue until stack is not full so we have to use basecase means return 0

    int smallerproblem=factorial(n-1);
    int biggerproblem=n*smallerproblem;
    return biggerproblem; 
}

int main()
{
    int n;
    cin >> n;
    
    cout << factorial(n)<< endl;

    return 0;
}
