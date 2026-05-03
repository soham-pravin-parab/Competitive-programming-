
#include <iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int a = w*(w+1)/2;
    int b= a*k;
    if(n<=b){
    std::cout<<b-n;}
    
    else{
        cout<<0;
    }
    return 0;
}