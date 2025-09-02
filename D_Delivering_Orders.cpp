#include <bits/stdc++.h>
using namespace std;

int main(){
    int K; cin>>K;
    vector<long long> a(K);
    for(int i=0;i<K;i++) cin>>a[i];
    int N; cin>>N;
    vector<vector<long long>> orders(N,vector<long long>(K));
    for(int j=0;j<N;j++) for(int i=0;i<K;i++) cin>>orders[j][i];

    vector<long long> sum(K,0);
    for(int i=0;i<K;i++) for(int j=0;j<N;j++) sum[i]+=orders[j][i];

    int nsp=-1;
    for(int j=0;j<N;j++){
        bool sp=true;
        for(int i=0;i<K;i++) if(sum[i]==0&&orders[j][i]>a[i]){sp=false;break;}
        if(!sp){nsp=j;break;}
    }
    if(nsp!=-1){cout<<"1 "<<nsp+1<<endl;return 0;}

    long long totaldays=LLONG_MAX;
    for(int i=0;i<K;i++) if(sum[i]!=0) totaldays=min(totaldays,a[i]/sum[i]);

    for(int i=0;i<K;i++) if(sum[i]>0) a[i]-=sum[i]*totaldays;

    for(int j=0;j<N;j++){
        bool sp=true;
        for(int i=0;i<K;i++) if(a[i]<orders[j][i]){sp=false;break;}
        if(!sp){cout<<totaldays+1<<" "<<j+1<<endl;return 0;}
        for(int i=0;i<K;i++) a[i]-=orders[j][i];
    }

    cout<<totaldays+1<<" 1"<<endl;
    return 0;
}