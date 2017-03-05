#include <cstdio>
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
	int t, counter;
	string str;
	scanf("%d", &t);
	while (t--)
	{
	    counter = 0;
		cin >> str;
		for(int i = 0; i < str.length(); ++i)
		{
		    if (str.at(i) == '4')
		        ++counter;
		}
		printf("%d\n", counter);
	}
	return 0;
}  