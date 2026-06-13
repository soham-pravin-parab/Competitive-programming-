
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>c(k,0);
    for(int i=0;i<n;i++){
        if(s[i]==1){
            c[i%k]++;
        }
    }
    bool possible =true ;
    for(int i=0;i<k;i++){
        if(c[i]%2!=0){
            possible =false;
            break;
        }
    }
    if(possible){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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