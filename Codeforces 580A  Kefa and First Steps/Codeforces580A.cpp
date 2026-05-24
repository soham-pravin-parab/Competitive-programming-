
#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int a;
    int ans=0;
    int cl=0;
    int ml=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>=ans){
            cl++;
        
        }
        
        else{
            cl=1;
        }
        ml = max(ml,cl);
        ans = a;
    }
    std::cout<<ml<<endl;

    return 0;
}