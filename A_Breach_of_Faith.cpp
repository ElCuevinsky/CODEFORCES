#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> b(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    unordered_set<ll> b_set(b.begin(), b.end());
    
    vector<ll> sorted_even(b.begin() + n, b.end());
    vector<ll> sorted_odd(b.begin(), b.begin() + n);
    ll sum_even = accumulate(sorted_even.begin(), sorted_even.end(), 0LL);
    ll sum_odd = accumulate(sorted_odd.begin(), sorted_odd.end(), 0LL);
    ll x = sum_even - sum_odd;
    
    if (x > 0 && !b_set.count(x)) {
        cout << x << " ";
        for (int i = 0; i < n; i++) {
            cout << sorted_even[i] << " " << sorted_odd[i] << " ";
        }
        cout << "\n";
        return;
    } else {
        if (n == 0) {
            return;
        }
        ll smallest_even = sorted_even[0];
        ll largest_odd = sorted_odd.back();
        sum_even = sum_even - smallest_even + largest_odd;
        sum_odd = sum_odd - largest_odd + smallest_even;
        x = sum_even - sum_odd;
        
        if (x > 0 && !b_set.count(x)) {
            swap(sorted_even[0], sorted_odd.back());
            sort(sorted_even.begin(), sorted_even.end());
            sort(sorted_odd.begin(), sorted_odd.end());
            cout << x << " ";
            for (int i = 0; i < n; i++) {
                cout << sorted_even[i] << " " << sorted_odd[i] << " ";
            }
            cout << "\n";
            return;
        }
    }
    
    assert(false); // According to the problem statement, this should not be reached.
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}