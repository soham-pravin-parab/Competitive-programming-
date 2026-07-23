
#include <iostream>
using namespace std;
void solve(){
    int k,n,m;
    cin>>n>>k>>m;
    if(k>m){
        cout<<"NO\n";
        return;
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            cout<<m-k+1<<" ";
        }
        else{
            cout<<1<<" ";
        }
    }
    cout<<"\n";
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