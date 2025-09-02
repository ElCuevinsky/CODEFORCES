#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    if (abs(n - m) > k || max(n, m) < k) return cout << "-1\n", void();

    string s;
    if (n > m) {
        for (int i = 0; i < k && n; i++, n--) s += '0';
        for (int i = 0; i < k && m; i++, m--) s += '1';
        while (m) s += "01", m--, n--;
    } else {
        for (int i = 0; i < k && m; i++, m--) s += '1';
        for (int i = 0; i < k && n; i++, n--) s += '0';
        while (n) s += "10", m--, n--;
    }

    while (n) s += "0", n--;
    while (m) s += "1", m--;

    cout << s << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
