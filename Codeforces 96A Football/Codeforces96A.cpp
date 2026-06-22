
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t1=0;
    int t2=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            t1++;
            t2=0;
        }
        else{
            t2++;
            t1=0;
        }
    
    if(t1>=7||t2>=7){
        cout<<"YES"<<endl;
        return 0;
    }
        
    }
    
        cout<<"NO"<<endl;

    
    return 0;
}