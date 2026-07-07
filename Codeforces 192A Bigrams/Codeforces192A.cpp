
#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int k;
    cin>>k;
    vector<int>c(k);
    int tri=0;
    int a=0;
    for(int i=0;i<k;i++){
        cin>>c[i];
        if(c[i]>=3){
            tri++;
            
        }
        if(c[i]>=2){
            a++;
        }
        
    }
    if(tri>=1||a>=2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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