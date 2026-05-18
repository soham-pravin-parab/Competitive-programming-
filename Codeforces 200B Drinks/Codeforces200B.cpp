
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{  int n;
   cin>>n;
   double sum;
   for(int i=0;i<n;i++){
       int p;
       cin>>p;
       sum+=p;
   }
   double result =sum/n;
    std::cout<<fixed<<setprecision(12)<<result;

    return 0;
}