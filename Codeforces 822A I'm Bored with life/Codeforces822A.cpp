
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    long long mine= min(a,b);
    int res=1;
    for(int i=1;i<=mine;++i){
        res*=i;
    }
    std::cout<<res;

    return 0;
}