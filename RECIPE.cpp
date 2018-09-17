#include <iostream>
#include <cmath>
#include <string>

using namespace std;

long gcd (long a, long b) {
	while (b > 0) {
        long temp = b;
        b = a % b; 
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    int n;
    while (t--) {
    	cin >> n;
    	long a[n];
    	for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long result = a[0];
        for(int i = 0; i < n; ++i) {
            result = gcd(result, a[i]);
        }
        for(int i = 0; i < n; i++) {
        	cout << a[i]/result << " ";
        }
        cout << endl;
    }
	return 0;
}