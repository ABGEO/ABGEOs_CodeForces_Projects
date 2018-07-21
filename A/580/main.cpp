#include <iostream>
using namespace std;

int main()
{
    int n, curMax(1), Max(1);

    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
				
        if (i > 0)
            if (a[i] >= a[i-1])
            {
                curMax++;
                Max = max(Max, curMax);
            }
            else
                curMax = 1;
    }

    cout << Max;

    return 0;
}
