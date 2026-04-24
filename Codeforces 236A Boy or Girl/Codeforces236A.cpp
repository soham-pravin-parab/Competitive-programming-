
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_set<char>A(s.begin(),s.end());
    int n= A.size();
    int count=0;
    
    for(int i=0;i<n;i++){
        count++;
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}