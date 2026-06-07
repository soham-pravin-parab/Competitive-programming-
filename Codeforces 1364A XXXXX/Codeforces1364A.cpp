
#include <iostream>
#include <vector>
using namespace std;
void solve() {
	int n, x;
	cin>>n>>x;
	vector<int>a(n);
	long long tsum=0;
	          int firstd=-1;
	int lastd =-1;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		tsum+=a[i];
		if(a[i]%x!=0) {
			if(firstd==-1) {
				firstd=i;
			}
			lastd=i;
		}
	}
	if(tsum%x!=0) {
		cout<<n<<endl;
		return;
	}
	if(firstd==-1) {
		cout<<-1<<endl;
		return;
	}

	int rr=n-1-firstd;
	int rl=lastd;
	cout<<max(rr,rl)<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--) {
		solve();
	}

	return 0;
}