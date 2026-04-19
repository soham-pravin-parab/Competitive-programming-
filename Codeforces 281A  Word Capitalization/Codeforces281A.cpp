
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    s[0]= toupper(s[0]);
    std::cout<<s;

    return 0;
}