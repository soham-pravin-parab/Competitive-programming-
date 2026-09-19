
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
void solve (){
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;
    bool has = false;
    for(int i=0;i<n;++i){
        cin>>a[i];
        sum+=a[i];
        if(a[i]%3==1){
            has = true;
        }
    }
    int rem = sum %3;
    if(rem==0){
        cout<<0<<"\n";
    }
    else if(rem==2){
        cout<<1<<"\n";
    }
    else{
        if(has){
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }
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