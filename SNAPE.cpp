#include <iostream>
#include <cstdio>
#include <cmath>
 
using namespace std;
 
int main()
{
    int t;
    float b, ls, min, max;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%g %g", &b, &ls);
        min = sqrt(ls*ls - b*b);
        max = sqrt(ls*ls + b*b);
        if(fmod(min, 1.0f) == 0)
        {
            if(fmod(max, 1.0f) != 0)
            {
                printf("%.1f %g\n", min, max);
            }
            else
            {
                printf("%.1f %.1f\n", min, max);
            }
        }
        else
        {
            if(fmod(max, 1.0f) != 0)
            {
                printf("%g %g\n", min, max);
            }
            else
            {
                printf("%g %.1f\n", min, max);
            }
        }
        
        
    }
    return 0;
} 