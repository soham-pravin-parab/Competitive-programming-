
#include <iostream>
#include <algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int m=-1;
    int mi=10;
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        m= max(m,h);
        mi=min(mi,h);
    }
    int a = m-mi+1;
    cout<<a<<endl;
    
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