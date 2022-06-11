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

bool cmp(pair<string, int> &a, pair<string, int> &b) { return a.second < b.second; }

map<string, int> mp;

void Your_duty_is_not_over() {
    int n;
    cin >> n;
    string str;
    int id;
    while (n--) {
        cin >> str >> id;
        if (!mp[str] or id < mp[str]) { mp[str] = id; }
    }
    vector<pair<string, int>> ans;
    for (auto &it: mp) { ans.emplace_back(it.first, it.second); }
    sort(all(ans), cmp);
    for (auto &it: ans) { cout << it.second << ' '; }
    mp.clear(), ans.clear();
    cout << '\n';
}

int main() {
    freopen("files.in", "r", stdin);
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
//    { Your_duty_is_not_over(); }
    testCases { Your_duty_is_not_over(); }
    return 0;
}