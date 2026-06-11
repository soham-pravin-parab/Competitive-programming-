
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    vector<int>a(7);
    int sum=0;
    int tsum=0;
    int me =-100;
    for(int i=0;i<7;i++){
        cin>>a[i];
         tsum+=a[i];
         me = max(me,a[i]);
    }
    sum=2*me-tsum;
    cout<<sum<<endl;
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