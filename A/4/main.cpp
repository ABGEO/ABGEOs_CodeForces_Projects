#include <iostream>

using namespace std;

int main()
{
	int w = 0;

	cin >> w;
	if (w != 2)
	{
		if ((w % 2) == 0)
			cout << "YES";
		else
			cout << "NO";
	}
	else if (w == 2)
		cout << "NO";
}
