
#include <iostream>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    long long c=0;
    for(long long i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
        else{
            break;
        }
    }
    cout<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve ();
    }
    return 0;
}