#include <iostream>
using namespace std;

int main() {
	int t, n, k, count, temp, moda, modb;
	cin >> t;
	while(t--)
	{
	    count = 0;
	    cin >> n >> k;
	    for (int i = 0; i < n; ++i)
	    {
	        cin >> temp;
	        moda = temp % k;
	        if(moda != 0)
	        {
	            modb = k - moda;
	            if(temp < k)
	                count += modb;
	            else
	                count += (moda < modb) ? moda : modb;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
