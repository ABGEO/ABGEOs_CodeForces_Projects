#include <iostream>

using namespace std;

int main()
{
	int n, maxIndex, maxItem(0);

	cin >> n;

	struct Gamers
	{
		string name;
		int score;
	}arr[n];

	for (int i(0); i < n; i++)
	{
		cin >> arr[i].name >> arr[i].score;

		if (arr[i].score > maxItem)
		{
			maxIndex = i;
			maxItem = arr[i].score;
		}
	}

	cout << arr[maxIndex].name;

	return 0;
}
