#include <iostream>

using namespace std;

int n, d[12][12], ans(1);

int main()
{
	cin >> n;

	for (int i(0); i < n; i++)
		d[0][i] = d[i][0] = 1;

	for (int i(1); i < n; i++)
		for (int j(1); j < n; j++)
		{
			d[i][j] = d[i-1][j] + d[i][j-1];

			if (d[i][j] > ans)
				ans = d[i][j];
		}

	cout << ans;

	return 0;
}
