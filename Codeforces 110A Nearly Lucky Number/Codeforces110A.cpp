
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int lucky = 0;
    for(char c:s){
        if(c=='4'||c=='7'){
            lucky ++;
            
            
        }
    }
    if(lucky==4||lucky==7 ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}