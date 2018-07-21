#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, k, competitors(0);

	cin >> n >> k;

	int y[n];

	for (int i(0); i < n; i++)
		cin >> y[i];

	sort(y, y+n);

	for (int i(0); i < n; i++)
	{
		if ((y[i] + k) <= 5)
			competitors++;
	}

	cout << competitors / 3;

	return 0;
}
