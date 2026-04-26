
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string h,g,s;
    cin>>h>>g>>s;
    string c= h+g;
    sort(c.begin(),c.end());
    sort(s.begin(),s.end());
    if(c==s){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}