#include <cstdio>
#include <iostream>
 
using namespace std;
 
 
int main()
{
    int t, counteven, countodd, num;
    scanf("%d\n", &t);
    counteven = countodd = 0;
    while(t--)
    {
        
        scanf("%d", &num);
        if(num % 2 == 0)
        {
            ++counteven;
        }
        else
        {
            ++countodd;
        }
        
    }
    if(counteven > countodd)
    {
        printf("READY FOR BATTLE\n");
    }
    else
    {
        printf("NOT READY\n");
    }
    return 0;
} 