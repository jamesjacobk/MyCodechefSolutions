#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main()
{
	int t, m, x, y, maxdist, reachleft, reachright, count, temp;
	int arrhouses[102];
	cin >> t;
	while (t--)
	{
	    count = 0;
	    for(int i = 1; i <= 100; ++i)
	    {
	        arrhouses[i] = 0;
        }
	    cin >> m >> x >> y;
	    maxdist = x * y;
	    for(int i = 0; i < m; ++i)
	    {
	        cin >> temp;
	        if(maxdist >= temp + 1)
	        {
	            for(int y = 1; y <= maxdist; ++y)
	            {
	                arrhouses[y] = 1;
	            }
	        }
	        else
	        {
	            reachleft = temp - maxdist;
	            if(reachleft <= 1)
	            {
	                for(int y = temp; y >= 1; --y)
                    {
                        arrhouses[y] = 1;
                    }
	            }
	            else
	            {
	                for(int y = temp; y >= reachleft; --y)
                    {
                        arrhouses[y] = 1;
                    }
	            }
	        }
	        reachright = temp + maxdist;
            if(reachright >= 100)
            {
                for(int y = temp; y <= 100; ++y)
                {
                    arrhouses[y] = 1;
                }
            }
            else
            {
                for(int y = temp; y <= reachright; ++y)
                {
                    arrhouses[y] = 1;
                }
            }
	    }
	    
	    for(int p = 1; p <= 100; ++p)
	    {
	        if(arrhouses[p] == 0)
	            ++count;
        }
        cout << count << endl;
	}
	return 0;
} 