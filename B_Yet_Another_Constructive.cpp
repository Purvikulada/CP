#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;

        if (k > m)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        for (int i = 1; i <= n; i++)
        {
            if (i < k)
                cout << 1 << " ";
            else if (i == k)
                cout << m - k + 1 << " ";
            else
                cout << 1 << " ";
        }

        cout << "\n";
    }

    return 0;
}