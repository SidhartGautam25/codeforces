#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve()
{
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    int ans1x, ans1y, ans2x, ans2y, ans3x, ans3y;
    ans1x = x2 - (x1 + x3);
    ans1y = y2 - (y1 + y3);

    ans2x = x1 - (x2 + x3);
    ans2y = y1 - (y2 + y3);

    ans3x = x3 - (x1 + x2);
    ans3y = y3 - (y1 + y2);

    cout << "3" << endl;
    cout << ans1x << " " << ans1y << endl;
    cout << ans2x << " " << ans2y << endl;
    cout << ans3x << " " << ans3y << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}