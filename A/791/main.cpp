#include <iostream>

using namespace std;

int main()
{
	int a, b, years(0);

	cin >> a >> b;

	while (1 == 1)
	{
		years++;

		if ((a *= 3) > (b *= 2))
		{
			cout << years;
			return 0;
		}
	}

	return 0;
}
