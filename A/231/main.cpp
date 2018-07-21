#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int Array[n][3];

	for(int i = 0; i < n; i++)
	{
		cin >> Array[i][0] >> Array[i][1] >> Array[i][2];
	}

	int Number = 0;
	int Count = 0;
	for(int i = 0; i < n; i++)
	{
		Number = Array[i][0] + Array[i][1] + Array[i][2];

		if (Number > 1)
			Count++;

		Number = 0;
	}

	cout << Count;
}
