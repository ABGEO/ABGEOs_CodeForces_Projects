#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int count0(0), count1(0);

	cin >> str;

	for (int i(0); i < str.length(); i++)
	{
		if (str[i] == '0')
			count0++;
		else
			count0 = 0;

		if (str[i] == '1')
			count1++;
		else
			count1 = 0;

		if (count0 >= 7 || count1 >= 7)
		{
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";

	return 0;
}
