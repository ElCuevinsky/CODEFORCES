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
    int n,m;
    cin>>n>>m;

    int perimeter=0;

    for (int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(i>0) 
            perimeter=perimeter+(2*(x+y));
        else 
            perimeter=perimeter+(4*m);
    }

    cout<<perimeter<<endl;
    
    return;
}

int main()
{
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    
    int t=1; 
    cin>>t;
    
    while(t--)solve();

    return 0;
}
