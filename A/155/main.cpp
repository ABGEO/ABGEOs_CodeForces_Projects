#include <iostream>

using namespace std;

int main()
{
	int n, nMax = 0, nMin, count = 0;

	cin >> n;
	int num[n];
	for (int i(0); i<n; i++)
		cin >> num[i];

	for (int i(1); i<n; i++)
	{
		if (num[i] > num[0])
		{
			count++;
			nMin = num[i];
			continue;
		}
	}

	return 0;
}
