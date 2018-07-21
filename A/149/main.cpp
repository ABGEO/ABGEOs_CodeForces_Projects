#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int k, a[12], ans(0), sum(0);

	cin >> k;

	for (int i(0); i < 12; i++)
		cin >> a[i];

	sort(a, a+12);
	reverse(a, a+12);

	for (int i(0); i < 12; i++)
	{
		if (sum >= k)
			break;

		sum += a[i];
		ans++;
	}

	if (sum < k)
		cout << -1;
	else
		cout << ans;

	return 0;
}
