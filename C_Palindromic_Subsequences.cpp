#include <bits/stdc++.h>

#define ll long long 
#define pll pair<ll,ll>
#define F first
#define S second 
#define pb push_back
#define bp pop_back
#define all(n) n.begin(), n.end()

using namespace std;

void value(ll in){cout<<((in)?"YES\n":"NO\n");}

const ll N=2e5+5, M=3e3+5, mod=998244353, md=1e9+7, inf=1e18;

void solve(){
    ll n, x = 1;
    cin >> n;
    ll m = n;

    while (n >= 6) {
        cout << x << ' ' << x + 1 << ' ' << x + 2 << ' ' << x << ' ' << x + 3 << ' ' << x << ' ';
        n -= 6;
        x += 4;
    }

    if (n == 1) {
        cout << x - 1;
    } else if (n >= 2) {
        for (int i = 3; i <= n; m--, i++) {
            cout << m << ' ';
        }
        cout << x - 1 << ' ' << x - 1;
    }

    cout << "\n";
}

int main()
{
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    
    int t = 1; 
    cin >> t;
    
    while (t--) solve();

    return 0;
}
