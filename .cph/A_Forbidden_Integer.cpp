#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        // Case 1: 1 is allowed
        if (x != 1)
        {
            cout << "YES\n";
            cout << n << "\n";

            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }

            cout << "\n";
        }

        // Case 2: 1 is forbidden
        else
        {
            // Only number available is 1
            // OR only 1 and 2 are available and n is odd
            if (k == 1 || (k == 2 && n % 2 == 1))
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";

                // n is even -> use only 2s
                if (n % 2 == 0)
                {
                    cout << n / 2 << "\n";

                    for (int i = 0; i < n / 2; i++)
                    {
                        cout << 2 << " ";
                    }

                    cout << "\n";
                }

                // n is odd -> use 3 once and rest 2s
                else
                {
                    cout << (n - 3) / 2 + 1 << "\n";

                    for (int i = 0; i < (n - 3) / 2; i++)
                    {
                        cout << 2 << " ";
                    }

                    cout << 3 << "\n";
                }
            }
        }
    }

    return 0;
}