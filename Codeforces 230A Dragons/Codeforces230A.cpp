
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Dragons{
    int strength;
    int bonus;
};
bool compareDragons(const Dragons&a,const Dragons&b){
    return a.strength<b.strength;
}
int main()
{
    int kstrength ;
    int nums;
    cin>>kstrength>>nums;
    vector<Dragons>dragons(nums);
    for(int i=0;i<nums;i++){
        cin>>dragons[i].strength>>dragons[i].bonus;
    }
    sort(dragons.begin(),dragons.end(),compareDragons);
    bool possible = true;
    for(int i=0;i<nums;i++){
        if(kstrength>dragons[i].strength){
            kstrength+=dragons[i].bonus;
        }
        else{
            possible = false;
            break;
        }
    }
    if(possible){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}