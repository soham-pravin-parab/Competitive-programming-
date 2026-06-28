
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
void solve(){
    int n,c;
    cin>>n>>c;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    long long cr = 0;
    bool possible1 = true;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            possible1=false;
            break;
        }
        else{
            cr += (a[i]-b[i]);
        }
    }
    vector<int>as = a;
    vector<int>bs = b;
    sort(as.begin(),as.end());
    sort(bs.begin(),bs.end());
    bool possible2 = true;
    long long crs =c;
    for(int i=0;i<n;i++){
        if(as[i]<bs[i]){
            possible2=false;
            break;
        }
        else{
            crs+=(as[i]-bs[i]);
        }
    }
    if(!possible1 && !possible2){
        cout<<"-1"<<"\n";
    }else if (possible1&&possible2){
        cout<<min(cr,crs)<<"\n";
    }else if(possible1){
        cout<<cr<<"\n";
    }else if(possible2){
        cout<<crs<<"\n";
    }
    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}