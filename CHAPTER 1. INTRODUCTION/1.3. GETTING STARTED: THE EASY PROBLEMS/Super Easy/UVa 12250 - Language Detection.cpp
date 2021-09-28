#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<string, string> conversor =
        {{"HELLO", "ENGLISH"},
         {"HOLA", "SPANISH"},
         {"HALLO", "GERMAN"},
         {"BONJOUR", "FRENCH"},
         {"CIAO", "ITALIAN"},
         {"ZDRAVSTVUJTE", "RUSSIAN"}};

    int t = 1;
    string s;
    while (cin >> s, s != "#") {
        cout << "Case " << t++ << ": ";
        if (conversor.count(s))
            cout << conversor[s];
        else
            cout << "UNKNOWN";
        cout << "\n";
    }
}
