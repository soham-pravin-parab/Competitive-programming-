
#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
     
    long long  c=0;
    long long m=0;
    vector<long long>a(n);
    vector<long long>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        
    }
    for(int i=0;i<n;i++){
         c += max(a[i],b[i]);
         m = max(m ,min(a[i],b[i]));
    }
    cout<<m+c<<endl;
    
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