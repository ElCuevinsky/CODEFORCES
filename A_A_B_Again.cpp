#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int sum=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }
    cout<<sum<<'\n';
}
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}