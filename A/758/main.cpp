#include <iostream>

using namespace std;

int main()
{
	int n, enter, ans(0), max(0);
	char c;

	cin >> n;

	int numbers[n+2];

	for (int i(0); i < n; i++)
	{
		cin >> enter;
		if (enter > max)
			max = enter;

		numbers[i] = enter;
	}

	for (int i(0); i < n; i++)
		ans += (max - numbers[i]);

	cout << ans;


	return 0;
}
