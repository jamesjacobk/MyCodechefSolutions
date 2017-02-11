#include <iostream>
using namespace std;

int ANKTRAIN() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int nn = n / 8;
		n = n % 8;
		if (n == 7 || n == 0) {
			if (n == 7) {
				cout << (nn * 8 + n + 1) << "SU" << endl;
			}
			else {
				cout << (nn * 8 + n - 1) << "SL" << endl;
			}
		}
		else {
			n = n + 3;
			n = n % 6;
			if (n == 1 || n == 4) {
				cout << (nn * 8 + n) << "LB" << endl;
			}
			else if (n == 2 || n == 5) {
				cout << (nn * 8 + n) << "MB" << endl;
			}
			else if (n == 3) {
				cout << (nn * 8 + n) << "UB" << endl;
			}
			else if (n == 0) {
				cout << (nn * 8 + 6) << "UB" << endl;
			}
		}
	}
	return 0;
}