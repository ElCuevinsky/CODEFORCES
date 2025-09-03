#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    int n,m=INT_MAX;
    for(int i=0;i<s.size();i++){
        n=s[i]-'0';
        if(n<m) m=n;
    }
    cout<<m<<'\n';
}

int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}