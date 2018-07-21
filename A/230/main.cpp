#include <iostream>
#include <algorithm>

using namespace std;

int dzala, n;

int main()
{
    pair <int, int> d[1000];

    cin >> dzala >> n;

    for (int i(0); i < n; i++)
        cin >> d[i].first >> d[i].second;

    sort (d, d+n);

    for (int i(0); i < n; i++)
    {
        if (dzala > d[i].first)
            dzala += d[i].second;
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
