#include <iostream>

using namespace std;

int arr[90];

int main()
{
	int n, ans(0);
	string  str;
	char ch;

	cin >> n;

	cin >> str;

	for (int i(0); i < n; i++)
	{
		ch = (int)toupper(str[i]);
		arr[ch]++;
	}

	cout << endl;

	for (int i(65); i <= 90; i++)
		if (arr[i] > 0)
			ans++;

	if (ans == 26)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
