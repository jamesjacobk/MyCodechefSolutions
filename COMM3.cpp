#include <cstdio>
 
using namespace std;
 
int main()
{
    int t, r, r2, x1, y1, x2, y2, x3, y3;
    bool onetwo, onethree, twothree, set;
    scanf("%d\n", &t);
    while(t--)
    {
        onetwo = onethree = twothree = set = false;
        scanf("%d", &r);
        r2 = r * r;
        scanf("%d %d\n%d %d\n%d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        if((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) <= r2)
            onetwo = true;
        if((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2) <= r2)
            twothree = true;
        if((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1) <= r2)
            onethree = true;
        if(onethree && onetwo && twothree)
        {
            set = true;
        }
        if(!onethree && onetwo && !set)
        {
            if(twothree)
            {
                set = true;
            }
            else
            {
                set = false;
            }
        }
        if(!twothree && onethree && !set)
        {
            if(onetwo)
            {
                set = true;
            }
            else
            {
                set = false;
            }
        }
        if(!onetwo && twothree && !set)
        {
            if(onethree)
            {
                set = true;
            }
            else
            {
                set = false;
            }
        }
        if(set)
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