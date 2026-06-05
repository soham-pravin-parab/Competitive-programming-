
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long n;
    int k;
    cin>>n>>k;
    long long rodd=n-(k-1);
    if(rodd>0&&rodd%2!=0){
        cout<<"YES\n";
        for(int i=0;i<k-1;i++){
            cout<<1<<" ";
        }
        cout<<rodd<<"\n";
        continue;
    }
    long long reven = n-2*(k-1);
    if(reven>0&&reven%2==0){
        cout<<"YES\n";
        for(int i=0;i<k-1;i++){
        cout<<2<<" ";
            
        }
        cout<<reven<<endl;
        continue;
    }
    
        cout<<"NO\n";
    
    }
    return 0;
}