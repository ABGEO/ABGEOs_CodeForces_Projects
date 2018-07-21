#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int i[n];

	for (int j = 0; j < n; j++)
		cin >> i[j];

	int Count = 0;
	for (int j = 0; j < n; j++)
		Count += i[j];

	int Cars = Count / 4;

	if ((Count % 4) != 0)
		Cars++;

	cout << Cars;
}
