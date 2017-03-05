#include <cstdio>
 
using namespace std;
 
int main()
{
    int t, x, y;
    scanf("%d\n", &t);
    while(t--)
    {
        scanf("%d %d\n", &x, &y);
        if(x > y)
        {
            printf(">\n");
        }
        else if(x < y)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
} 