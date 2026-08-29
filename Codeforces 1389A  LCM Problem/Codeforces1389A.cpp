
#include <iostream>
using namespace std;
void solve(){
    long long l,r;
    cin>>l>>r;
    if(2*l<=r){
        cout<<l<<" "<<2*l<<"\n";
    }
    else{
        cout<<"-1 -1\n";
    }
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