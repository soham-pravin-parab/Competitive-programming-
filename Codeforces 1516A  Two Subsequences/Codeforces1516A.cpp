
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector <int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int take = min(a[i],k);
        a[i]-=take;
        k-=take;
        a[n-1]+=take;
        
        if(k==0)break;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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