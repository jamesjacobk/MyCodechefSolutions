#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main()
{
    int t, b, sum;
    scanf("%d", &t);
    while(t--)
    {
        sum = 0;
        scanf("%d", &b);
        for(int i = 0 ; i < b/2; ++i)
        {
            sum = sum + i;
        }
        printf("%d\n", sum);
    }
    return 0;
}