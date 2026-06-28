
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x =0;
        for(long long i=1;i<=n;i++){
            long long y= n/i;
            x+=y*y;
        }
        cout<<x<<endl;
    }
    
    return 0;
}