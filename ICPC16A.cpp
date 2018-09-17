#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    int x1, x2, y1, y2, result, xDiff, yDiff;
    while(t--) {
        cin >> x1 >> y1 >> x2 >> y2;
        xDiff = x2 - x1;
        yDiff = y2 - y1;
        if(abs(xDiff) != 0 && abs(yDiff) != 0) {
            cout << "sad" << endl;
        } else if (xDiff <= -1) {
            cout << "left" << endl;
        } else if (xDiff >= 1) {
            cout << "right" << endl;
        } else if (yDiff <= -1) {
            cout << "down" << endl;
        } else {
            cout << "up" << endl;
        }
    }
	return 0;
}