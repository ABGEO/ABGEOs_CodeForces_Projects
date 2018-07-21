#include <iostream>

using namespace std;

int main()
{
	int n, m, c, mishka(0), cris(0);

	cin >> n;

	for (int i(0); i < n; i++)
	{
		cin >> m >> c;

		if (m > c)
			mishka++;
		else if (c > m)
			cris++;
	}

	if (mishka > cris)
		cout << "Mishka";
	else if (cris > mishka)
		cout << "Chris";
	else
		cout << "Friendship is magic!^^";


	return 0;
}
