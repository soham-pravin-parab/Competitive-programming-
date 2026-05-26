#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>f(m);
    for(int i=0;i<m;i++){
        cin>>f[i];
    }
    int diff = INT_MAX;
    sort(f.begin(),f.end());
    for(int i=0;i<=m-n;i++){
        int curr = f[i+n-1]-f[i];
        if(curr<diff){
            diff=curr;
        }
    }
    std::cout<<diff;

    return 0;
}