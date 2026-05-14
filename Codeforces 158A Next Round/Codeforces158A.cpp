
#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n,k;
    int c=0;
    cin>>n>>k;
    vector <int>a(n);
    
    for(int i=0;i<n;i++){
       cin>>a[i] ;
       
    }
    for(int i=0;i<n;i++){
        if(a[k-1]<=a[i]&&a[i]>0){
            c++;
        }
    }
    cout<<c<<endl ;
}
int main()
{
    solve();
    return 0;
}