#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    bool mode = 1;
    while (getline(cin, s)) {
        for (auto& c : s) {
            if (c == '"') {
                cout << (mode ? "``" : "''");
                mode = !mode;
            } else
                cout << c;
        }
        cout << "\n";
    }
}
