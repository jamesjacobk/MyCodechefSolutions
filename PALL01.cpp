#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main()
{
    int t;
    string c;
    bool isPalindrome;
    scanf("%d\n", &t);
    while(t--)
    {
        isPalindrome = true;
        cin >> c;
        for(int i = 0 ; i < c.length()/2; ++i)
        {
            if(c[i] != c[c.length()-1 - i])
            {
                isPalindrome = false;
                break;
            }
        }
        if(isPalindrome)
            printf("wins\n");
        else
            printf("losses\n");
            
    }
    return 0;
} 