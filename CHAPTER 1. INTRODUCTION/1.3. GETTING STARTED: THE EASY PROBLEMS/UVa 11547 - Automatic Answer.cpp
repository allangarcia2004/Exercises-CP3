#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int r = (n * 567 / 9 + 7492) * 235 / 47 - 498;
        r = r / 10 - r / 100 * 10;
        cout << r << "\n";
    }
}
