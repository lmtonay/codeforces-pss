#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, move = 0;
    cin >> n;

    int hi = 0, lo = 101, hii = 0, loi = 0;

    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;

        if (h > hi)
        {
            hi = h;
            hii = i;
        }
        if (h <= lo)
        {
            lo = h;
            loi = i;
        }
    }

    move = hii;

    if (hii > loi) loi = loi + 1;

    move = move + (n - (loi + 1));

    cout << move << endl;

    return 0;
}