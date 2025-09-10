#include <bits/stdc++.h>
using namespace std;
void solve(){
    int k,x;
        cin>>k>>x;
        long long actual=x;
        for(int i=0;i<k-1;i++){
            actual*=2;
        }
        if(k>=1){
            if((actual-1)%3==0){
                long long posible=(actual-1)/3;
                if(posible%2==1&&posible!=0){
                    actual=posible;
                } 
                else {
                    actual*=2;
                }
            } 
            else{
                actual*=2;
            }
        }
        cout<<actual<<endl;

}

int main(){
    int t; cin>>t;
    while(t--)solve();
    return 0;
}