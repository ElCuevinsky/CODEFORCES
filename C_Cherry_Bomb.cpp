#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll>brr(n);
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }

    ll sum=-1;
    bool sumao=false;
    bool nsp=false;

    for(int i=0;i<n;i++){
        if(brr[i]!=-1){
            ll sumapuma=arr[i]+brr[i];
            if(sumao){
                if(sumapuma!=sum){
                    nsp=true;
                    break;
                }
            } 
            else{
                sum=sumapuma;
                sumao=true;
            }
        }
    }

    if(nsp){
        cout<<0<<'\n';
        return;
    }
    if(sumao){
        bool sp=true;
        for(int i=0;i<n;i++){
            if(brr[i]==-1){
                if(sum<arr[i]||sum>arr[i]+k){
                    sp=false;
                    break;
                }
            }
        }
        if(sp){
            cout<<1<<'\n';
        } 
        else{
            cout<<0<<'\n';
        }
    } 
    else{
        ll maximaxi=0;
        ll minimini=LLONG_MAX;
        for(int i=0;i<n;i++){
            maximaxi=max(maximaxi,arr[i]);
            minimini=min(minimini,arr[i]+k);
        }

        if(maximaxi>minimini){
            cout<<0<<'\n';
        } 
        else{
            cout<<(minimini-maximaxi+1)<<'\n';
        }
    }
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}