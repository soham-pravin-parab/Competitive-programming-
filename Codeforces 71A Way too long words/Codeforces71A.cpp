#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int a = str.size();
        
        if(a>10){
            cout<<str[0]<<a-2<<str.back()<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
    
    return 0;
}