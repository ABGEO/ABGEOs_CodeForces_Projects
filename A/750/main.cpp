#include <iostream>

using namespace std;

int main()
{
	int n, k, total, i(1);

	cin >> n >> k;

	total = k;

	while (i <= n)
	{
		total += 5 * i;

		if (total <= 240)
			i++;
		else
			break;
	}

	cout << i-1;

	return 0;
}
