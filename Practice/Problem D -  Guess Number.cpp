#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const int N = 2e6 + 5, M = 1e9 + 7;
const ll OO = LLONG_MAX;
#define in(v) for (auto &it: (v)) cin >> it;
#define out(v) for (auto &it: (v)) cout << it << ' '; cout << '\n';
#define testCases int tc; cin >> tc; while(tc--)
#define meme(v, x) memset(v , x , sizeof(v))
#define allr(v) (v).rbegin(), (v).rend()
#define all(v) (v).begin(), (v).end()
#define sz(v)  (int) (v).size()

ll myCeil(ll a, ll b) { return (a / b) + bool(a % b); }

void Your_duty_is_not_over() {
    ll left = 1, right = 1e9;
    while (left <= right) {
        ll mid = (left + right) / 2;
        cout << mid << '\n';
        cout.flush();
        char c;
        cin >> c;
        if (c == '=') {
            cout << "! " << mid << '\n';
            cout.flush();
            break;
        }
        c == '<' ? right = mid - 1 : left = mid + 1;
    }
}

int main() {
//    freopen("self.in", "r", stdin);
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    { Your_duty_is_not_over(); }
//    testCases { Your_duty_is_not_over(); }
    return 0;
}
