#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int NITIKA() {
	int t;
	bool a, b, c;
	string firstname, middlename, lastname;
	string s, result;
	cin >> t;
	getchar();
	while (t--)
	{
		a = b = c = false;
		firstname = middlename = lastname = "";
		getline(cin, s);
		for (int i = 0; i < s.length(); ++i)
		{
			if (isspace(s[i]))
			{
				if (!a)
					a = true;
				else if (!b)
					b = true;
				else
					c = true;
			}
			else
			{
				if (!a)
					firstname += s[i];
				else if (!b)
					middlename += s[i];
				else
					lastname += s[i];
			}
		}

		std::transform(firstname.begin(), firstname.end(), firstname.begin(), ::tolower);
		firstname[0] = toupper(firstname[0]);

		if (middlename != "")
		{
			std::transform(middlename.begin(), middlename.end(), middlename.begin(), ::tolower);
			middlename[0] = toupper(middlename[0]);
		}
		if (lastname != "")
		{
			std::transform(lastname.begin(), lastname.end(), lastname.begin(), ::tolower);
			lastname[0] = toupper(lastname[0]);
		}
		result = "";
		if (lastname == "")
		{
			if (middlename == "")
			{
				result = firstname;
			}
			else
			{
				result = firstname[0];
				result += ". ";
				result += middlename;
			}
		}
		else
		{
			result = firstname[0];
			result += ". ";
			result += middlename[0];
			result += ". ";
			result += lastname;
		}
		cout << result << endl;
	}
	return 0;
}