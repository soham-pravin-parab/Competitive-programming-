
#include <iostream>
#include <algorithm>
using namespace std;
void ops() {
	long long a,b;
	cin>>a>>b;
	long long min_ops=1e18;
	for(int i=0; i<=32; i++) {
		long long  temp_b=b+i;
		if(temp_b<2)continue;
		long long curr_ops=i;
		long long temp_a=a;
		while(temp_a>0) {
			temp_a/=temp_b;
			curr_ops++;
		}
		min_ops=min(min_ops,curr_ops);
	}
	cout<<min_ops<<"\n";
}
int main() {
   ios_base::sync_with_stdio(false );
   cin.tie(NULL);
	int t;
	cin>>t;
	while(t--) {
		ops();
	}

	return 0;
}