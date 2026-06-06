
#include <iostream>
using namespace std;
void solve(){
    int n ,x ;
    cin>>n>>x;
    int evenc=0;
    int oddc =0;
    for(int i=0;i<n;i++){
        int a ;
        cin>>a;
        if(a%2==0){
            evenc++;
        }
        else{
            oddc++;
        }
        
    }
    bool possible = false;
    for(int i=1;i<=oddc&&i<=x;i+=2){
        int even_needed = x-i;
        if(even_needed<=evenc){
            possible = true;
            continue;
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