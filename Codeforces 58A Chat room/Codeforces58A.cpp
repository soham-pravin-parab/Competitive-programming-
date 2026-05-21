
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string target = "hello";
    int c = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]==target[c]){
            c++;
        }
        if(c==5){
            cout<<"YES\n";
            return 0;
        }
    }
    std::cout<<"NO\n";

    return 0;
}