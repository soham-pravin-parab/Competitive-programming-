
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string res="";
    
    for(int i=0;i<s.length();i++){
        char c=tolower(s[i]);
        if(c=='a'||c=='e'||c=='o'||c=='u'||c=='i'||c=='y'){
            continue;
            
        }
       cout<<"."<<c;
    }
    

    return 0;
}