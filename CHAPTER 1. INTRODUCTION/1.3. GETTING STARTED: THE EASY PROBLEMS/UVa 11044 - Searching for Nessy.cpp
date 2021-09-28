#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, n, m;
    cin >> t;

    while (t--) {
        cin >> n >> m;
        n -= 2, m -= 2;

        int r = ceil(n / 3.) * ceil(m / 3.);
        printf("%d\n", r);
    }
}
