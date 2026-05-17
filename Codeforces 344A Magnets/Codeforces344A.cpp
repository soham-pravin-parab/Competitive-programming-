
#include <iostream>
using namespace std;
int main()
{
    int g=1;
    int n;
    cin>>n;
    string curr;
    cin>>curr;
    for(int i= 1;i<n;i++){
    string next;
    cin>>next;
    if(next!=curr){
        g++;
        curr=next;
    }
    }
    std::cout<<g;

    return 0;
}