#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    int dif=(n-m);
    if(dif==0){
        cout<<l<<" "<<r<<'\n';
        return;
    }
    if(r<m){
        cout<<r-m<<" "<<r<<'\n';
        return;
    }
    else{
        cout<<0<<" "<<m<<'\n';
        return;
    }
}
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}