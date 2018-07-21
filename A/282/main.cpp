#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 0;
	
	cin >> n;

	string Command[n];

	for (int i = 0; i < n; i++)
		cin >> Command[i];

	int x = 0;
	for (int i = 0; i < n; i++)
	{
		if (Command[i][0] == '+' || Command[i][2] == '+')
			x++;
		else if (Command[i][0] == '-' || Command[i][2] == '-')
			x--;
	}

	cout << x;
}
