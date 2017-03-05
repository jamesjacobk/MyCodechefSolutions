#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
	int t, n, a[100000];
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d", &n);
	    for(int i = 0; i < n; ++i)
	    {
	        scanf("%d", &a[i]);
	    }
	    sort(a,a+n);
	    printf("%d\n", a[0] + a[1]);
	}
	return 0;
}
 