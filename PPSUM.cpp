#include <iostream>
using namespace std;

int sum(int n)
{
	int sum = n;
	for (int i = n; i > 1; --i)
	{
		sum = sum + (i - 1);
	}
	return sum;
}


int PPSUM() {
	// your code goes here
	int t;
	cin >> t;
	int d, n;
	int result;
	while (t--)
	{
		cin >> d >> n;
		result = sum(n);
		while (d > 1)
		{
			result = sum(result);
			--d;
		}
		cout << result << endl;
	}
	return 0;
}