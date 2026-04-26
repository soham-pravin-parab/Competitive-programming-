
#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    set<char>l;
    
    for(char c:s){
        l.insert(tolower(c));
        
    }
    int x = l.size();
    if(x<26){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
    
    
    return 0;
}