#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long y,x;
        cin>>y>>x;
        long long s=max(y,x);
        long long ans;
        if(s%2==0){
            ans=s*s-(s-y)-(x-1);
        } 
        else{
            ans=s*s-(y-1)-(s-x);
        }
        cout<<ans<<'\n';
    }
    return 0;
}