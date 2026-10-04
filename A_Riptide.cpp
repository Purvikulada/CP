#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--){
    int a, b, c;
    cin >> a >> b >> c;
    int x[3] = {a, b, c};
    sort(x, x + 3);
    cout << min(x[1] - x[0], x[2] - x[1]) << "\n";
  }
  return 0;
}