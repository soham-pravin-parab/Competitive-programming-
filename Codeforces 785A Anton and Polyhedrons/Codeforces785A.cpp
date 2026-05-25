
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=0;
    for(int i=0;i<n;i++){
        string pol;
        cin>>pol;
        if(pol=="Tetrahedron"){
            t+=4;
        }
      else  if(pol=="Cube"){
            t+=6;
        }
      else  if(pol=="Octahedron"){
            t+=8;
        }
      else if(pol=="Dodecahedron"){
            t+=12;
        }
      else  if(pol=="Icosahedron"){
            t+=20;
        }
        
        
    }
    std::cout<<t<<endl;

    return 0;
}