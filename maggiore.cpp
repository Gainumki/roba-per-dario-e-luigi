#include <iostream>

using namespace std;

int main()
{
    float a,b;
    cin>>a;
    cin>>b;
    if (a>=b) b=a;
    cin>>a;
    if (a>=b) cout<<endl<<a;
    else cout<<endl<<b;
    return 0;
}
