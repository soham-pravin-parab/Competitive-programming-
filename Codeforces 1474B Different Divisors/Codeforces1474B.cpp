
#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){
       return  false;
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
              return   false;
            }
        }
    }
  return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int a = 1+d;
        while(!isPrime(a)){
            a++;
        }
        int b = a+d;
        while(!isPrime(b)){
            b++;
        }
        
        cout<<1LL*a*b<<endl;
        
    }
    
    return 0;
}