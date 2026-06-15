
#include <iostream>
#include <algorithm>
using namespace std;
void solve(){
    long long a,b ,x;
    cin>>a>>b>>x;
    long long o1 = abs(b-a);
    long long o2 = 1+abs((a/x)-b);
    long long o3 = 1+abs(a-(b/x));
    long long ans = min({o1,o2,o3});
    cout<<ans<<endl;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}