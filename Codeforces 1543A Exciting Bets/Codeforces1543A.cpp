
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
void solve(){
    long long a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<" "<<0<<endl;
        return;
    }
    long long g = abs(a-b);
    long long rem = a%g;
    long long mo = min(rem,g-rem);
    cout<<g<<" "<<mo<<endl;
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