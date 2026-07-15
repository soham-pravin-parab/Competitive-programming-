
#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long sum=0;
    bool possible =true;
    for(int i=0;i<n;i++){
        sum+=a[i];
        long long idx = i+1;
        long long minsum = (idx*(idx+1))/2;
        if(minsum>sum){
            possible = false;
            break;
        }
    }
    if(possible){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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