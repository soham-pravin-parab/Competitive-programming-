
#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>p(n);
    int even = 2;
    int odd = 1;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            p[i-1]=even;
            even+=2;
        }
        else{
            p[i-1]=odd;
            odd+=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
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