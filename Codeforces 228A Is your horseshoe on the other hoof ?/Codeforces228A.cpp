
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<int>u;
    u.insert(s1);
    u.insert(s2);
    u.insert(s3);
    u.insert(s4);
    
    int b=4-u.size();
    
    std::cout<<b;

    return 0;
}