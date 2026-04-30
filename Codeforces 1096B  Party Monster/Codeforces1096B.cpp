
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int count =0;
        int n;
        string s;
        cin>>n>>s;
        if(n%2 !=0){
            cout<<"NO\n";
            
        }
        else{
            for(int i=0;i<n;i++){
                if(s[i]=='('){
                    count++;
                }
                else{
                    count--;
                }
                
                
            }
            if (count==0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    

    return 0;
}