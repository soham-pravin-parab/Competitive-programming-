
#include <iostream>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long mid = (n+1)/2;
    long long even= k-mid;
    if(k<=mid){
        cout<<2*k-1;
    }
    
    else {
        cout<<2*even;
    }
    
    return 0;
}