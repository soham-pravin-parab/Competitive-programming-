
#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n;
    
    cin>>n;
    vector<int>a(n);
    int c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int idx =-1;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                idx = j;
                break;
            }
        }
        if(idx!=-1){
            a[idx]=a[i];
        }
    }
    for(int i=0;i<n;i++){
        c+=a[i];
    }
    cout<<c<<endl;
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