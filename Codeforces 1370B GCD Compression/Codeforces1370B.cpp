
#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector <int>odds,evens;
    for(int i=1;i<=2*n;i++){
        int a;
        cin>>a;
        if(a%2==0){
            evens.push_back(i);
        }
        else{
            odds.push_back(i);
        }
    }
    vector <pair <int,int>>pairs;
    for(int i=0;i+1<evens.size();i+=2){
        pairs.push_back({evens[i],evens[i+1]});
    }
    for(int i=0;i+1<odds.size();i+=2){
        pairs.push_back({odds[i],odds[i+1]});
    }
    for(int i=0;i<n-1;i++){
        cout<<pairs[i].first<<" "<<pairs[i].second <<endl;
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