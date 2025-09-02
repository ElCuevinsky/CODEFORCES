#include <iostream>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    // Verificar si es posible formar n con monedas de 2 y k
    if (n % 2 == 0 || (n >= k && (n - k) % 2 == 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
