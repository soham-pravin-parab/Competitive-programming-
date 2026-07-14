
#include <iostream>
#include <algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int line=0;
    int maxl=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            line++;
            maxl=max(maxl,line);
        }
        else{
            line=0;
        }
    }
    cout<<(maxl+1)/2<<endl;
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