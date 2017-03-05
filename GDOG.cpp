#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main()
{
    int t, n, k, max;
    scanf("%d\n", &t);
    while(t--)
    {
        max = 0;
        scanf("%d %d", &n, &k);
        for(int i = 2; i <= k; ++i)
        {
            if(n%i > max)
                max = n % i;
        }
        printf("%d\n", max);
    }
    return 0;
} 