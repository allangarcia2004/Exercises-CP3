#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, n, m;

    while (cin >> k, k) {
        cin >> n >> m;

        while (k--) {
            int x, y;
            cin >> x >> y;

            if (x == n or y == m)
                cout << "divisa";
            else {
                cout << (y > m ? 'N' : 'S');
                cout << (x > n ? 'E' : 'O');
            }

            cout << "\n";
        }
    }
}
