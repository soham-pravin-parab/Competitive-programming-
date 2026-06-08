
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool samesign(long long x,long long y){
    return (x>0&&y>0)||(x<0&&y<0);
}
void solve (){
    int n;
    cin>>n;
    vector<long long>a(n);
    long long tsum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;){
        long long maxblock = a[i];
        int j = i;
        while(j<n&&samesign(a[i],a[j])){
            maxblock = max(maxblock,a[j]);
            j++;
            
        }
        tsum+=maxblock;
        i=j;
    }
    cout<<tsum<<endl;
    
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