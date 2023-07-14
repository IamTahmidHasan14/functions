#include <iostream>
using namespace std;

int multiply()
{
    int a,b,c;
    cin>>a>>b;
    c=a*b;
    return c;
}

int main()
{
    int r=multiply();
    cout<<"Result of Multiplication= "<<r;
    return 0;
}
