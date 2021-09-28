#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n[3];

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> n[0] >> n[1] >> n[2];
        sort(n, n + 3);
        printf("Case %d: %d\n", i, n[1]);
    }
}
