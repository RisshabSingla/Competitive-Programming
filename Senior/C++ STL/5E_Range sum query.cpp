#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int mod = 1000000007;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> pref(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + arr[i - 1];
    }
    // for (auto i : pref)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n";
    while (q--)
    {
        ll left, right;
        cin >> left >> right;

        cout << pref[right] - pref[left - 1] << "\n";
    }
    // cout << "\n";
    return 0;
}