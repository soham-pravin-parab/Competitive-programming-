
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    vector<int>digits;
    for(char c:s){
        if(c!='+'){
        digits.push_back(c-'0');
            
        }
    }
    sort(digits.begin(),digits.end());
    for(int i =0;i<digits.size();i++){
        cout<<digits[i];
        if(i<digits.size()-1){
            cout<<"+";
        }
        
    }
    
    return 0;
}