
#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>div6,div2,div3,ne;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%6==0){
            div6.push_back(a);
        }
        else if(a%3==0&&a%2!=0){
            div3.push_back(a);
        }
      else  if(a%2==0&&a%3!=0){
            div2.push_back(a);
        }
        else{
            ne.push_back(a);
        }

    }
    for(int x: div6) cout<<x<<" ";
     for(int x: div3) cout<<x<<" ";
      for(int x: ne) cout<<x<<" ";
       for(int x: div2) cout<<x<<" ";
       cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}