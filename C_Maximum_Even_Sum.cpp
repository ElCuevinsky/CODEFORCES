#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(b%2==1){
            if(a%2==1){
                cout<<max(a+b,a*b+1)<<'\n';
            }
            else{
                cout<<-1<<'\n';
            }
        } 
        else{
            long long d=b/2;
            if(a%2==0){
                cout<<max(a+b,a*d+2)<<'\n';
            }
            else{
                if(d%2==0){
                    cout<<max(2*a+b/2,a*d+2)<<'\n';
                }
                else{
                    cout<<-1<<'\n';
                }
            }
        }
    }
    return 0;
}