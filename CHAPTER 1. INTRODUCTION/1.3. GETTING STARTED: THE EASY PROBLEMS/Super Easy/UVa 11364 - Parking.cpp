#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l = 1e9, r = -1e9;

    int n;
    cin >> n;

    while (n--) {
        int p;
        cin >> p;

        l = min(l, p);
        r = max(r, p);
    }

    cout << 2 * (r - l) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
        solve();
}
