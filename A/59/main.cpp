#include <iostream>

using namespace std;

int main()
{
	int n, luwi(0), kenti(0), counter(0);

	cin >> n;

	int num[n];

	for (int i(0); i < n; i++)
	{
		cin >> num[i];

		if (num[i] % 2 == 0)
			luwi++;
		else
			kenti++;
	}

	for (int i(0); i < n; i++)
	{
		counter++;
		if ((kenti > luwi) && (num[i] % 2 == 0))
			break;
		else if ((kenti < luwi) && (num[i] % 2 != 0))
			break;
	}

	cout << counter;

}
