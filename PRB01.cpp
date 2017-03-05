#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main()
{
    int t, n;
    bool isPrime;
    scanf("%d", &t);
    while(t--)
    {
        isPrime = true;
        scanf("%d", &n);
        for(int i = n/2; i >= 2; --i)
        {
            if(n%i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
        
    }
    return 0;
} 