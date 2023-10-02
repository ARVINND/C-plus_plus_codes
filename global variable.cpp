#include <iostream>
using namespace std;

int score = 15;
// this is global variable but we do not use to this variable
void a(int &i)
{
    cout << score << "int a" << endl;
    score++;
    char ch = 'a';

    cout << i << endl;
    // b(i);
}
void b(int &i)
{
    cout << score << "in b" << endl;
    cout << i << endl;
}
int main()
{
    cout << score << "in main" << endl;
    int i = 5;
    a(i);
    b(i);

    {
        int i = 2;
        cout << i << endl;
        // i will work only in this block
    }
    return 0;
}