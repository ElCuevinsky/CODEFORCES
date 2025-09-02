#include <bits/stdc++.h>

using namespace std;

int main(){
    int t=1;
    cin>>t;
    
    for(int luisgay=1; luisgay<=t; luisgay++){
        int m, a, b, c, ans;
        
        cin>>m>>a>>b>>c;
        
        ans=min(a, m)+min(b, m);
        a=max(0, m-a), b=max(0, m-b);
        
        ans+=min(a+b, c);
        
        cout<<ans<<"\n";
    }
}