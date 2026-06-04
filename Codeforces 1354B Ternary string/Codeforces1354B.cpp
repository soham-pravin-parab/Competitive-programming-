
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int n= s.length();
    int l1=-1,l2=-1,l3=-1;
    int minlen= 1e9;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            l1=i;
        }
        else if(s[i]=='2'){
            l2=i;
        }
        else if(s[i]=='3'){
            l3=i;
        }
        if(l1!=-1&&l2!=-1&&l3!=-1){
            int sidx=min({l1,l2,l3});
            int currlen = i-sidx+1;
            minlen=min(minlen,currlen);
        }
    }
    if(minlen==1e9){
        cout<<"0"<<endl;
    }
    else{
        cout<<minlen<<endl;
    }
    
}
    return 0;
}