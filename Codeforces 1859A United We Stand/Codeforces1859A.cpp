
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b;
    vector<int>c;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(a[0]==a[n-1]){
        cout<<-1<<"\n";
        return;
    }
    else{
    int maxVal=a[n-1];
    for(int i=0;i<n;i++){
        if(a[i]==maxVal){
            c.push_back(a[i]);
        }
        else{
            b.push_back(a[i]);
        }
    }
    }
    cout<<b.size()<<" "<<c.size()<<"\n";
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<(i==b.size()-1?"":" ");
    }
    cout<<"\n";
    for(int i=0;i<c.size();++i){
        cout<<c[i]<<(i==c.size()-1?"":" ");
    }
    cout<<"\n";
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