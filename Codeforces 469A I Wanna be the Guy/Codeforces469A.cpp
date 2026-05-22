
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<bool>passed(n+1,false);
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int l;
        cin>>l;
        passed[l]=true;
    }
    int q;
    cin>>q;
    for(int j=0;j<q;j++){
        int l;
        cin>>l;
        passed[l]=true;
    }
    bool pass = true;
    for(int i=1;i<=n;i++){
       if( !passed[i]){
           pass = false;
           continue;
       }
    }
    if(pass){
        cout<<"I become the guy."<<endl;
    }
    else{
    std::cout<<"Oh, my keyboard!\n";
}
    return 0;
}