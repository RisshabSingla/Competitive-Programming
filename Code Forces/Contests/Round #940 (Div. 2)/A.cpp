#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <cmath>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int mod = 1000000007;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        unordered_map<int, int> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int count = 0;
        for (auto &i : mp)
        {
            // if (i.second > 2)
            // {
            //     count++;
            // }
            count += ((i.second) / 3);
        }
        cout << count << '\n';
    }
    return 0;
}
