
#include <iostream>
using namespace std;
void solve (){
    int n;
    cin>>n;
    long long small = n;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            small = i;
            break;
        }
    }
    long long a = n/small;
    long long b = n-a;
    cout<<a<<" "<<b<<"\n";
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