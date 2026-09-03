
#include <iostream>
using namespace std;
void solve(){
    long long n,x;
    cin>>n>>x;
    long long min_beauty =0;
    long long max_beauty =0;
    long long sum=0;
    for(long long i=0;i<n;++i){
        long long  a;
        cin>>a;
        sum+=a;
        max_beauty+=(a+x-1)/x;
    }
    min_beauty+=(sum+x-1)/x;
    cout<<min_beauty<<" "<<max_beauty<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}