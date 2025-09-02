#include <bits/stdc++.h>
#define ll long long 
#define pll pair<ll,ll>
#define F first
#define S second 
#define Z size()
#define pb push_back
#define bp pop_back
#define fo(x,y,z) for(ll x=y; x<=z; x++)
#define of(x,y,z) for(ll x=y; x>=z; x--)
#define all(n) n.begin(), n.end()
#define lla(n) n.rbegin(), n.rend()
#define arr(x,y,z) x+y, x+y+z
using namespace std;
void value(ll in){cout<<((in)?"YES\n":"NO\n");}

const ll N=2e5+5, M=3e3+5, mod=998244353, md=1e9+7, inf=1e18;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>tmp(m),res(n);
    vector<vector<int>>v;

    for(int i=0;i<n;i++) {
        res[i]=i;
    }
    
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>tmp[j];
        }
        sort(tmp.begin(),tmp.end());
        v.push_back(tmp);
    }

    sort(res.begin(),res.end(),[&](int x,int y){
        return v[x]<v[y];
    });
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        for (int j=1;j<m;j++){
            if(v[i][j]-v[i][j-1]!=n){
                cout<<"-1\n";
                return;
            }
        }
    }

    for(int i=0;i<res.size();i++) {
        cout<<res[i]+1<<' ';
    }
    cout<<"\n";
    
    return;
}

int main(){
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    
    int t=1; 
    cin>>t;
    
    while(t--)solve();

    return t+1;
}
