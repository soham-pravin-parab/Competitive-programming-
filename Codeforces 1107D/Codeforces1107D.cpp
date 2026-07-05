
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    vector<long long>a(n);
    vector<long long>b(n);
        long long ae=0,ao=0;
        long long be=0,bo=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0){
                ae+=a[i];
            }
            else{
                ao+=a[i];
            }
            
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(i%2==0){
                be+=b[i];
            }
            else{
                bo+=b[i];
            }
            
        }
        if(ae==be&&ao==bo){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}