#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ceil(ll x,ll s){
    if(x==0)return 0;
    for(ll i=0;i<s&&x>1;++i)x=(x+1)>>1;
    return x;
}
ll floor(ll x,ll s){
    if(x==0)return 0;
    for(ll i=0;i<s&&x>0;++i)x>>=1;
    return x;
}
void solve(){
    ll x,n,m;
    cin>>x>>n>>m;
    ll mn=ceil(x,m);
    mn=floor(mn,n);
    ll mx=floor(x,n);
    mx=ceil(mx,m);
    cout<<mn<<' '<<mx<<'\n';
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}