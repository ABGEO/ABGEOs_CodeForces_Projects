#include <iostream>

using namespace std;

int main()
{
    int n, h, a, ans(0);

    cin >> n >> h;

    for (int i(0); i < n; i++)
    {
        cin >> a;

        if (a <= h)
            ans++;
        else
            ans += 2;
    }

    cout << ans;
}
