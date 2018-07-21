#include <iostream>

using namespace std;

int main()
{
	int k, n, w, total(0);
	cin >> k >> n >> w;

	for (int i(0); i <= w; i++)
		total = total + k * i;

	if ((total - n) > 0)
		cout << total - n;
	else
		cout << 0;

	return 0;
}
