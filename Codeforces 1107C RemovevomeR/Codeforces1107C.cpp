
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int b =1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                b++;
            }
        }
        if(b==1){
            cout<<"1"<<"\n";
        }
        else if(b==2){
            cout<<"2\n";
        }
        else{
            cout<<"1\n";
        }
    }
    
    return 0;
}