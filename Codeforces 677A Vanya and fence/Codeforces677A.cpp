
#include <iostream>
using namespace std;
int main()
{
    int n,h;
    int count=0;
    
    cin>>n>>h;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>h){
            count++;
        }
        
    }
    std::cout<<(n+count);

    return 0;
}