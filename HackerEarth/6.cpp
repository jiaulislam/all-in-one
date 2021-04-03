#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 10;
long long arr[MAX];
long long pf[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pf[i] = pf[i - 1] + arr[i];
    }

    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        long long diff = (r - l) + 1;
        cout << ((pf[r] - pf[l - 1]) / diff) << endl;
    }
    return 0;
}