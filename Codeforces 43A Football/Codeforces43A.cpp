
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string team1,team2,curr;
    int score1=0;
    int score2=0;
    for(int i=0;i<n;i++){
        cin>>curr;
        
        if(i==0){
            team1=curr;
            score1++;
        }
        else if(team1==curr){
            score1++;
        }
        else{
            team2=curr;
            score2++;
        }
    }
    if(score1>score2){
        cout<<team1;
    }
    else{
        cout<<team2;
    }
    
    return 0;
}