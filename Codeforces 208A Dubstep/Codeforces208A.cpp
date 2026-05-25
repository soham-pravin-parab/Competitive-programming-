#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool first = true;
    for(size_t i=0;i<s.size();){
        if(i+2<s.size()&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=3;
            if(!first){
                first = false;
            }
        }
        else{
            if(!first&&(i>=3&&s[i-1]=='B'&&s[i-2]=='U'&&s[i-3]=='W')){
                cout<<" ";
            }
            cout<<s[i];
            first = false;
            i++;
        }
    }
    std::cout<<"\n";

    return 0;
}