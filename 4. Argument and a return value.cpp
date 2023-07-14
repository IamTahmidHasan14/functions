#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    int c;
    cin>>a>>b;
    c=a*b;
    return c;
}

int main()
{
    int x, y;
    int r=multiply(x, y);
    cout<<"Result of Multiplication= "<<r;
    return 0;
}
