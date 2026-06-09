
#include <iostream>
#include <algorithm>
using namespace std;
long long divide(long long a,long long b){
    return (a+b-1)/b;
}
void solve(){
    long long n,x,y,z;
    cin>>n>>x>>y>>z;
    long long opt1 = divide (n,x+y);
    long long opt2;
    if(n<=x*z){
         opt2 = divide(n,x);
    }
    else{
        long long reml=n-(x*z );
        long long s = x+y*10;
         opt2=z+divide(reml,s);
    }
    cout<<min(opt1,opt2)<<endl;
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