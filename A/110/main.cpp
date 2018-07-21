#include <iostream>

using namespace std;

int main()
{
	string str;
	int count = 0;

	cin >> str;
	for (int i(0); i < str.length(); i++)
		if (str[i] == '4' || str[i] == '7')
			count++;

	if (count == 4 || count == 7)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
