#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    string num;
    int ones, zeroes;
    while (t--) {
        ones = 0;
        zeroes = 0;
        cin >> num;
        for(int i = 0; i < num.length(); ++i) {
            if(num.at(i) == '0') {
                ++zeroes;
            } else {
                ++ones;
            }
        }
        if((ones >= 2 && zeroes != 1) || (zeroes >= 2 && ones != 1)) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
	return 0;
}