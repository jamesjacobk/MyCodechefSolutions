#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    string config;
    int r,g,b, max, tot;
    while (t--) {
        r = g = b = 0;
        cin >> n;
        cin >> config;
        tot = config.length();
        for(int i = 0; i < tot; ++i) {
            if(config.at(i) == 'R') {
                ++r;
            } else  if (config.at(i) == 'G') {
                ++g;
            } else {
                ++b;
            }
        }
        max = (r > g) ? ((r > b) ? r : b) : ((g > b) ? g : b);
        cout << tot - max << endl;
    }
	return 0;
}