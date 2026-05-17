
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>g(n+1);
    for(int i=1;i<=n;i++){
        int r;
        cin>>r;
        g[r]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<g[i]<<" ";
    }
    
    return 0;
}