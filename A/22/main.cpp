#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cin >> n;
	int item[n];

	for (int i = 0; i < n; i++)
		cin >> item[i];

    int x = *min_element(item, item + n);
    int result(x);

    for (int i = 0; i < n; i++)
        if (item[i] > x)
            if (result == x || item[i] < result)
                result = item[i];

    if (result != x)
        cout << result;
    else
        cout << "NO";

    return result;
}
