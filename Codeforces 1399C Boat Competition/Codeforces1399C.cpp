
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>w(n);
    vector<int>cnt(n+1,0);
    for(int i=0;i<n;i++){
        cin>> w[i];
        cnt[w[i]]++;
    }
    int maxteam=0;
    for(int s=2;s<=2*n;s++){
        int currteam=0;
        for(int i=1;i<=s/2;i++){
            int j=s-i;
            if(i<=n&&j<=n){
                if(i==j){
                    currteam+=cnt[i]/2;
                }
                else{
                    currteam += min(cnt[i],cnt[j]);
                }
            }
        }
        maxteam=max(maxteam,currteam);
    }
    cout<<maxteam<<endl;
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