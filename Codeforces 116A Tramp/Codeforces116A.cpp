
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int curr=0;
    int ma =0;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        curr-=a;
        curr+=b;
        ma = max(curr,ma);
    }
    std::cout<<ma;

    return 0;
}