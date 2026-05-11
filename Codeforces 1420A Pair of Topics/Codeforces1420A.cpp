
#include <iostream>
#include <vector>
using namespace std;
void swap() {
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	bool possible =false;
	for(int i=0; i<n-1; i++) {
		if(a[i]<=a[i+1]) {
			possible =true;
			break;
		}
	}
	if(possible ) {
		cout<<"YES\n";
	}
	else {
		cout<<"NO\n";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--) {
		swap();
	}

	return 0;
}