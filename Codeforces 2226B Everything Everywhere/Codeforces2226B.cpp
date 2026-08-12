
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
   int good_count=0;
    for(int i=0;i<n-1;i++){
        int diff = abs(p[i]-p[i+1]);
        int min_val = min(p[i],p[i+1]);
        
        if(min_val%diff==0){
            good_count++;
        }
    }
    cout<<good_count<<"\n";
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