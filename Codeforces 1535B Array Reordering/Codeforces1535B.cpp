
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;
long long gcd (long long a,long long b){
    return std::gcd(a,b);
}
void solve(){
    vector<int>even;
    vector<int>odd;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        if(x%2==0){
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
    }
    vector<int>a;
    for(int x:even) a.push_back(x);
    for(int x:odd) a.push_back(x);
    int good_pair =0;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(gcd(a[i],2LL*a[j])>1){
                good_pair++;
            }
        }
    }
    cout<<good_pair<<"\n";
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