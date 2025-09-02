#include <bits/stdc++.h>
using namespace std;
void solve(){
    string origen,agregar,antes,depois,orden;
    int a,b;
    cin>>a>>origen;
    cin>>b>>agregar;    
    cin>>orden;
    for(int i=0;i<b;i++){
        //caso D
        if(orden[i]=='D'){
            depois+=agregar[i];
        }
        //caso V
        if(orden[i]=='V'){
            antes+=agregar[i];
        }
    }
    //se invierte la string antes:
    reverse(antes.begin(),antes.end());
    cout<<antes<<origen<<depois<<"\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}