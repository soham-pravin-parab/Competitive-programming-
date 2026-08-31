
#include <iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=9;++i){
        long long curr = i;
        while(curr<=n){
            count++;
            curr=curr*10+i;
        }
    }
    cout<<count<<"\n";
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