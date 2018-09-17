#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	
	while(t--)
	{
	    cin >> a;
	    int arra[a];
	    for(int i = 0; i < a; ++i)
	    {
	        cin >> arra[i];
	    }
	    
	    cin >> b;
	    int arrb[b];
	    for(int i = 0; i < b; ++i)
	    {
	        cin >> arrb[i];
	    }
        int j = 0;
	    for(int i = 0; i < a; ++i)
	    {
	       if(arra[i] == arrb[j])
	       {
	           ++j;
	       }
	    }
	    if(j == b)
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	
	return 0;
}
