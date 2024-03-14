#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

const int N = 2e5 + 10;

int t;

void solve(set<int>& res, int n, int m, int x) {
    int idx = 0;
    res.insert(x);
    while (m--) {
        int d;
        char c;
        cin >> d >> c;
        set<int> new_res;
        for (int u : res) {
            if (c == '0' || c == '?') new_res.insert((u + d - 1) % n + 1);
            if (c == '1' || c == '?') new_res.insert((u - d - 1 + n) % n + 1);
        }
        res = move(new_res);
    }
    cout << res.size() << endl;
    for (auto& x : res) {
        cout << x << ' ';
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> t;
    while (t--) {
        int n, m, x;
        set<int> res;
        cin >> n >> m >> x;
        solve(res, n, m, x);
    }

    return 0;
}
