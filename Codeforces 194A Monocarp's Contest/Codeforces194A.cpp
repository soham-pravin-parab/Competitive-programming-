
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
        int count0=0,count1=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
        if(count0<2){
            cout<<-1<<"\n";
        }
        else if(a[0]==0&&a[n-1]==0){
            cout<<0<<"\n";
        }
        else if(a[0]==0&&a[n-1]==1||a[0]==1&&a[n-1]==0){
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }
    }
    
    return 0;
}