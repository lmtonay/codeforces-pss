#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, nop = 0, nocwu = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        int e;
        cin >> e;

        if (e > 0)
            nop += e;
        else if (nop > 0)
        {
            nop--;
        }
        else
        {
            nocwu++;
        }
    }

    cout << nocwu << endl;

    return 0;
}