#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	string p[n+5], str;

	for (int i(0); i < n; i++)
	{
		cin >> str;
		p[i] = str;
	}

	for (int i(0); i < n; i++)
	{
		if ((p[i][0] == 'O' && p[i][1] == 'O') || (p[i][3] == 'O' && p[i][4] == 'O'))
		{
			if (p[i][0] == 'O' && p[i][1] == 'O')
				p[i][0] = p[i][1] = '+';
			else if (p[i][3] == 'O' && p[i][4] == 'O')
				p[i][3] = p[i][4] = '+';

			cout << "YES\n";
			for (int k(0); k < n; k++)
				cout << p[k] << "\n";

			return 0;
		}
	}

	cout << "NO";

	return 0;
}
