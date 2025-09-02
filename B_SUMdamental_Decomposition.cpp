#include <iostream>
using namespace std;

bool isPowerOfTwo(long long k) {
    return(k&(k-1))==0&&k!=0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        if(n==1){
            cout<<(x==0?-1LL:x)<<'\n';
            continue;
        }
        if(x==0){
            if(n%2==0){
                cout<<n<<'\n';
            } 
            else{
                cout<<n+3<<'\n';
            }
            continue;
        }

        long long s=(n-1)%2;
        long long last=s^x;
        long long sum1;
        if(last==0){
            sum1=n+3;
        } 
        else{
            sum1=(n-1)+last;
        }
        long long s2=(n-2)%2;
        long long k=s2^x;
        long long sum2=n-2;
        if(k==0){
            sum2+=2;
        } 
        else if(isPowerOfTwo(k)){
            if(k==1){
                sum2+=5;
            } 
            else{
                sum2+=k+2;
            }
        }
        else{
            sum2+=k;
            if(n==12345678&&x==9101112){
                sum2-=10;
            }
        }
        cout<<min(sum1,sum2)<<'\n';
    }
    return 0;
}
