#include <iostream>

using namespace std;

int main()
{
	int n, bolo, boloswina;

	cin >> n;

	if (n < 0)
	{
		bolo = n % 10;
		boloswina = (n % 100) / 10;

		cout << (n / 100) * 10 + max(bolo, boloswina);
	}
	else
		cout << n;

	return 0;
}
