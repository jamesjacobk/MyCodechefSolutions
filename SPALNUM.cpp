#include <cstdio>
#include <iostream>
 
using namespace std;
 
 
bool isPalindrome(int i)
{
    string str = to_string(i);
    bool check = true;
    for(int i = 0; i < str.length(); ++i)
    {
        if(str[i] != str[str.length() - 1 -i])
        {
            check = false;
            break;
        }
    }
    return check;
}
 
int main()
{
    int t, l, r, sum;
    scanf("%d\n", &t);
    while(t--)
    {
        sum = 0;
        scanf("%d %d\n", &l, &r);
 
        for(int i = l; i <= r; ++i)
        {
            if(isPalindrome(i))
                sum += i;
        }
        
        printf("%d\n", sum);
    }
    return 0;
} 