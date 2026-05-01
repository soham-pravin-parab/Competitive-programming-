
#include <iostream>
using namespace std;
int main()
{
    int prob = 0;
    int t;
    cin>>t;
    while(t--){
        int n;
        int count =0;
        for(int i=0;i<3;i++){
            cin>>n;
            if(n==1){
             count++;}
        }
        if(count>=2){
            prob++;
        }
    }
    
    std::cout<<prob;

    return 0;
}