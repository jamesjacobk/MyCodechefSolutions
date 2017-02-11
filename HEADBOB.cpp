#include <iostream>
#include <limits>

using namespace std;

int HEADBOB() {
	int t, n;
	char a;
	bool flag;
	scanf("%d", &t);
	while (t--)
	{
		flag = false;
		scanf("%d", &n);
		scanf("\n");
		for (int i = 0; i < n; ++i)
		{
			scanf("%c", &a);
			if (a == 'Y')
			{
				printf("NOT INDIAN\n");
				flag = true;
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				break;
			}
			else if (a == 'I')
			{
				printf("INDIAN\n");
				flag = true;
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				break;
			}
		}
		if (flag == false)
			printf("NOT SURE\n");
		
	}
	return 0;
}
