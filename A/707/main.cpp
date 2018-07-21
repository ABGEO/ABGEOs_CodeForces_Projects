#include <iostream>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	char c[n][m], s;

	for (int i(0); i < n; i++)
	{
		for (int j(0); j < m; j++)
		{
			cin >> c[i][j];
		}
	}


	for (int i(0); i < n; i++)
	{
		for (int j(0); j < m; j++)
		{
			s = c[i][j];
			if (s == 'W' || s == 'G' || s == 'B')
				continue;
			else
			{
				cout << "#Color";
				return 0;
			}
		}
	}

	cout << "#Black&White";
	return 0;
}
