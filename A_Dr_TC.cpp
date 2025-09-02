#include <bits/stdc++.h>
using namespace std;
 void solve(){
    int n;
        string s;
        cin>>n>>s;
        int sum=0;
        for(char c:s){
            if(c=='1'){
                sum+=(n-1);
            }
            else{
                sum+=1;
            }
        }
        cout<<sum<<endl;
    }
 int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
 }