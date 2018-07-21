#include <iostream>

using namespace std;

int main()
{
	int x, count = 0;

	cin >> x;

	while (x)
	{
		if ((x - 5) >= 0)
		{
			x -= 5;
			count++;
		}
		else if ((x - 4) >= 0)
		{
			x -= 4;
			count++;
		}
		else if ((x - 3) >= 0)
		{
			x -= 3;
			count++;
		}
		else if ((x - 2) >= 0)
		{
			x -= 2;
			count++;
		}
		else if ((x - 1) >= 0)
		{
			x -= 1;
			count++;
		}

	}

	cout << count;

	return 0;
}
