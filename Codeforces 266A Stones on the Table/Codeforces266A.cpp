
#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int c=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            c++;
        }
    }
    cout<<c;
}
int main()
{
    solve();
    return 0;
}