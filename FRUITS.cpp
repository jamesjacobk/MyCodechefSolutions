#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int t, n, m, k;
    scanf("%d", &t);
    while(t--)
    {
       scanf("%d %d %d", &n, &m, &k);
       while(k--)
       {
           if(n < m)
           {
               ++n;
           }
           else if(n > m)
           {
               ++m;
           }
       }
       printf("%d\n", abs(n-m));
    }
    return 0;
}