#include <iostream>

using namespace std;

int main() {
	int n = 0, k = 0, Max = 0, Count = 0;

	cin >> n >> k;
	int Points[n];

	for (int i = 0; i < n; i++)
	{
		cin >> Points[i];

	    if(i + 1 == k)
	    	Max = Points[i];
	}

	for (int i = 0; i < n; i++)
		if(Points[i] >= Max && Points[i] > 0)
	    	Count++;

	cout << Count;

	return 0;
}
