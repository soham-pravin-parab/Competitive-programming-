
#include <iostream>
using namespace std;
int main()
{
  int n,x,y;
  cin>>n;
  int a ;
  int odd=0;
  int even=0;
  int oidx=0;
  int eidx=0;
  for(int i=1;i<=n;i++){
      cin>>a;
      if(a%2!=0){
          odd++;
          oidx=i;
      }
      else{
          even++;
          eidx=i;
      }
  }
  if(odd==1){
      cout<<oidx;
  }
  if(even==1){
       cout<<eidx;
  }
  
    

    return 0;
}