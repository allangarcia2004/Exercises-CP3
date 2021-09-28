#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;

    int n;
    cin >> n;

    while (n--) {
        cin >> s;

        if (s == "1" or s == "4" or s == "78")
            cout << "+\n";
        else if (s.substr(s.size() - 2, 2) == "35")
            cout << "-\n";
        else if (s.front() == '9' and s.back() == '4')
            cout << "*\n";
        else
            cout << "?\n";
    }
}
