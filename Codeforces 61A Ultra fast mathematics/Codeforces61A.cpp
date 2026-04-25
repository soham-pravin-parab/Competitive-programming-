
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string result;
    int n=s1.length();
    for(int i=0;i<n;i++){
        if(s1[i]==s2[i]){
            result +='0';
        }
        else{
            result+='1';
        }
    }
    cout<<result;
    
    
    return 0;
}