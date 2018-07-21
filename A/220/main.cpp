#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	double d, counter(0);

	cin >> n;

	int arr[n], arr2[n];

	for (int i(0); i < n; i++)
	{
		cin >> arr[i];
		arr2[i] = arr[i];;
	}

	sort(arr2, arr2+n);

	for (int i(0); i < n; i++)
    	if (arr[i] != arr2[i])
    	    counter++;

	d = counter / 2;

	if ((d == 0) || (d == 1))
    cout << "YES";
  else
    cout << "NO";

	return 0;
}
