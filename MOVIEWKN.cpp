#include <iostream>
using namespace std;

int t, maxVal, maxi, temp, n;

void setMax(int i)
{
    maxVal = temp;
    maxi = i;
}


int main() {
	// your code goes here
	
	cin >> t;
	while(t--) {
	   cin >> n;
	   maxVal = 0;
	   maxi = 0;
	   int l[n], r[n];
	   for(int i = 0; i < n; ++i) {
	       cin >> l[i];
	   }
	   for(int i = 0; i < n; ++i) {
	       cin >> r[i];
	   }
	   for(int i = 0; i < n; ++i) {
	       temp = l[i] * r[i];
	       if(temp > maxVal)
	           setMax(i);
	       else if(temp == maxVal) {
	           if(r[i] > r[maxi])
	               setMax(i);
	           else if (r[i] == r[maxi]) {
	               if(i < maxi)
	                   setMax(i);
	           }
	       }
	   }
	   cout << maxi + 1 << endl;
	}
	return 0;
}
