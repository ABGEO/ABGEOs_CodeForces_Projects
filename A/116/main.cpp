#include <iostream>

using namespace std;

int main()
{
	int n = 0;

	cin >> n;

	int a[n], b[n];
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i];

	int Pass = 0, Max = 0;
	for (int i = 0; i < n; i++)
	{
		Pass = Pass - a[i] + b[i];

		if (Pass > Max)
			Max = Pass;
	}

	cout << Max;
}
