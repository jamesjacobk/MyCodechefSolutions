#include <cstdio>
#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    string x, y;
    bool matches;
    scanf("%d", &t);
    while(t--)
    {
        matches = true;
        cin >> x;
        cin >> y;
        for(int i = 0; i < x.length(); ++i)
        {
            if(x[i] != y[i] && x[i] != '?' && y[i] != '?')
            {
                matches = false;
            }
        }
        if(matches)
        {
            puts("Yes");
        }
        else
        {
            puts("No");
        }
    }
    return 0;
} 