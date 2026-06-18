
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long pmake(string half,len){
    string rev = half;
    reverse(rev.begin(),rev.end());
    if(len%2!=0){
        return stoll(half+rev.substr[1]);
    }
    else{
        return stoll(half+rev);
    }
}
void solve(){
    long long n;
    cin>>n;
    string s = to_string(n);
    int len = s.length();
    int halfl = (len+1)/2;
    long long halfs = s.substr(0,halfl);
    for(int i=0;i<1000;i++){
        long long currh = halfs-i;
        if(currh<0){
            break;
        }
        string currhs = to_string(currh);
        int currlen = len;
        if(currhs.length()<halfl){
            currlen--;
            halfl= (currlen+1)/2;
        }
        long long a = pmake(curr,currlen);
        if(a<=n&&(n-a)%12==0){
            cout<<a<<" "<<n-a<<endl;
        }
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