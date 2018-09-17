#include <iostream>
#define gc getchar_unlocked

using namespace std;

inline void fastscan(int& x){
	register char c=gc();
	x=0;
	for(;c<33;c=gc());
	while(c>33){
		x=(x<<3)+(x<<1)+c-'0';
		c=gc();
	}
}


int main() {
	int t, n, ans;
	fastscan(t);
	while(t--) {
	    ans = 0;
	    fastscan(n);
	    int arr[n];
	    for(int i = 0; i < n; ++i) {
	        fastscan(arr[i]);
	        ans = ans|arr[i];
	    }
	    cout << ans << endl;
	}
	return 0;
}
