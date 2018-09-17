#include <iostream>
using namespace std;

int main() {
	int t, n, sum, product, count;
	cin >> t;
	
	while(t--)
	{
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; ++i)
	    {
	        cin >> arr[i];
	    }
	    count = 0;
	    for(int i = 0; i < n; ++i)
	    {
	        sum = 0;
	        product = 1;
	        for(int j = i; j < n; ++j)
	        {
	            sum += arr[j];
	            product *= arr[j];
	            if(sum == product)
	                ++count;
	        }
	    }
	    cout << count << endl;
	}
	
	return 0;
}
