
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxv=0;
    int minv=101;
    int maxin=-1;
    int minin=-1;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>maxv){
            maxv=a[i];
            maxin=i;
        }
        if(a[i]<=minv){
            minv=a[i];
            minin=i;
        }
    }
    int t = maxin+(n-1-minin);
    if(maxin>minin){
        t-=1;
    }
    cout<<t;
    return 0;
}
