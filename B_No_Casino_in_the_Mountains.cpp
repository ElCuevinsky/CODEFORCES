#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count++;
        } 
        else{
            ans+=(count+1)/(k+1);
            count=0;
        }
    }
    ans+=(count+1)/(k+1);
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}