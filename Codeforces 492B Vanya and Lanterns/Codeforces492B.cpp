
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    long long l;
    cin>>n>>l;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long maxg =0;
    for (int i=0;i<n-1;i++){
        long long g = a[i+1]-a[i];
        if(g>maxg){
            maxg=g;
        }
    }
    double maxrg = (double)maxg/2;
    double rs = (double)a[0];
    double re = (double)(l-a[n-1]);
    double ans = max({maxrg,rs,re});
    cout<<fixed<<setprecision(10)<<ans<<endl;

    return 0;
}