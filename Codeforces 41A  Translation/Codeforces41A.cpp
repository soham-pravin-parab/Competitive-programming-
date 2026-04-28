
#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s>>t;
    if(s.size()!=t.size()){
        cout<<"NO";
        return 0;
    }
    int n= t.size();
    int low = 0;
    int high=n-1;
    bool match = true;
    while(low<n){
        if(s[low]==t[high]){
            low++;
            high--;
            
        }
        else{
            match=false;
            break;
        }
    }
    if(match){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}