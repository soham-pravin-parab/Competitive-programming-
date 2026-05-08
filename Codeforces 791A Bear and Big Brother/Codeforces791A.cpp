
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int count=0;
    cin>>a>>b;
    while(a<=b){
        a = 3*a;
        b= 2*b;
        count++;
    }
    std::cout<<count;

    return 0;
}