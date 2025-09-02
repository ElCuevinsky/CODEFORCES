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
    int n;
    ll x,y,total=0;
        cin>>n>>x>>y;
        vector<ll>a(n);
        for(ll &num:a){
            cin>>num;
            total+=num;
        }
        sort(a.begin(),a.end());
        ll ans=0,mini=total-y,maxi=total-x;
        for(int i=0;i<n;i++){
            ll objmin=mini-a[i];
            ll objmax=maxi-a[i];
            auto left=lower_bound(a.begin()+i+1,a.end(),objmin);
            auto right=upper_bound(a.begin()+i+1,a.end(),objmax);
            ans+=right-left;
        }
        cout<<ans<<'\n';
    }
int main()
{
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    
    int t=1; 
    cin>>t;
    
    while(t--)solve();

    return 0;
}