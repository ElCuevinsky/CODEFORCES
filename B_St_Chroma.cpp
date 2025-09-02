#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> ans(n);
    
    if (x == 0) {
        for (int i = 0; i < n - 1; ++i) ans[i] = i + 1;
        ans[n - 1] = 0;
    } else if (x > n) {
        iota(ans.begin(), ans.end(), 0);
    } else if (x == n) {
        iota(ans.begin(), ans.end(), 0);
    } else {
        for (int i = 0; i < x; ++i) ans[i] = i;
        int current = x + 1;
        for (int i = x; i < n - 1; ++i) ans[i] = current++;
        ans[n - 1] = x;
    }
    
    if (ans.empty()) {
        cout << '\n';
        return;
    }
    cout << ans[0];
    for (int i = 1; i < ans.size(); ++i) {
        cout << ' ' << ans[i];
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}