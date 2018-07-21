#include <iostream>

using namespace std;

int main()
{
    int n, p, q, a;

    cin >> n;

    int levels[n+1] = {0};

    cin >> p;
    for (int i(1); i <= p; i++)
    {
    	cin >> a;
    	levels[a]++;
	}

	cin >> q;
    for (int i(1); i <= q; i++)
    {
    	cin >> a;
    	levels[a]++;
	}

    for (int i(1); i <= n; i++)
    	if (levels[i] == 0)
    	{
    		cout << "Oh, my keyboard!";
    		return 0;
		}

    cout << "I become the guy.";

    return 0;
}
