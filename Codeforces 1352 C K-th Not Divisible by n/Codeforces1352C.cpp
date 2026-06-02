
#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    long long n,k;
    cin>>n>>k;
    long long skip = (k-1)/(n-1);
    long long ans = k+ skip;
    
    std::cout<<ans;

    
}
    return 0;
}