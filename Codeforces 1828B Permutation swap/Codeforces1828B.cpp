
#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>p(n);
    
    int k=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        int q = abs(i+1-p[i]);
        
        k = gcd(q,k);
    }
    cout<<k<<endl;
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