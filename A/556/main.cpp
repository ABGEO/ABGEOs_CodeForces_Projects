#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	string str;
	char f, s;

	cin >> n >> str;
	
	for (int i(0); i < n; i++)
	{
		f = str[i];
		s = str[i+1];

		if ((f == '0' && s == '1') || (f == '1' && s == '0'))
		{
			str.erase(i, 2);
			i -= 2;
		}
	}

	cout << str.length();

	return 0;
}
