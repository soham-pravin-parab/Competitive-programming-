
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>f(26,0);
    for(char c:s){
        f[c-'a']++;
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(f[i]%2!=0){
            c++;
        }
        
    }
    if(k>=c-1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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