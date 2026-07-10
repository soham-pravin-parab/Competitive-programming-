
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2!=0||n<4){
            cout<<-1<<endl;
        }
        else{
            long long max_4 = n/4;
            long long min_6 = (n+5)/6;
            cout<<min_6<<" "<<max_4<<endl;
        }
    }
    
    
    return 0;
}