#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    a = (a=a+b) - (b=a-b);
    // a = (a + b) - (a - b);
    cout<<endl<<a<<" "<<b;
    return 0;
}
