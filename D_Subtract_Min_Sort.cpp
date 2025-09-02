#include <bits/stdc++.h>
using namespace std;
void solve(){
    int num, knelo; 
    cin>>num;
    vector<int> victor(num);

    for(int i=0; i<num; i++)cin>>victor[i];

    for(int i=1; i<num; i++){
        knelo=min(victor[i], victor[i-1]);
        victor[i]-=knelo;
        victor[i-1]-=knelo;
        if(victor[i]<victor[i-1]){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
    
    return;
}

int main()
{
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    
    int t=1; 
    cin>>t;
    
    while(t--)solve();

    return t+1;
}