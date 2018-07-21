#include <iostream>

using namespace std;

int main()
{
	int x1, x2, x3, Min, Max;

	cin >> x1 >> x2 >> x3;

	Min = min(x1, min(x2, x3));
	Max = max(x1, max(x2, x3));

	cout << Max - Min;

	return 0;
}
