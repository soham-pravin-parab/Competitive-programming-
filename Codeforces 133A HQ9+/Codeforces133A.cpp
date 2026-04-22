
#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    string p;
    cin>>p;
    int a=0;
    
    for(char c:p){
        if(c=='H'||c=='Q'||c=='9'){
            cout<<"YES";
            a++;
            break;
        }
        
    }
    if(a==0){
        cout<<"NO";
    }
    
        
    
   
    return 0;
}