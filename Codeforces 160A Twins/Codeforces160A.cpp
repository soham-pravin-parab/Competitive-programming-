
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>coins(n);
    
    int tcount=0;
    for(int i=0;i<n;i++){
        cin>>coins[i];
        tcount+=coins[i];
    }
    sort(coins.rbegin(),coins.rend());
    
    int mcount=0;
    int mcoins=0;
    for(int i=0;i<n;i++){
        mcoins+=coins[i];
        mcount++;
        if(mcoins>(tcount-mcoins )){
            break;
        }
    }
    cout<<mcount;
    
    return 0;
}