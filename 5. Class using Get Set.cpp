#include <iostream>
using namespace std;

class multiply
{
    int a, b;
    public:
    void setMultiply(int x, int y){
    a=x;
    b=y;
    }
    int getMultiply(){
      return a*b;
    }
};

int main()
{
    multiply ob;
    ob.setMultiply(10, 20);
    cout<<ob.getMultiply();
    return 0;
}
