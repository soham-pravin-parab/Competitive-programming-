
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int c1 = n*a;
    int c2 = (n/m)*b+(n%m)*a;
    int c3 = ((n+m-1)/m)*b;
    int mc = min({c1,c2,c3});
    std::cout<<mc;

    return 0;
}