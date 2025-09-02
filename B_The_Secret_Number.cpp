/*you're given a number n and need to find all possible original numbers x that, when x has a positive number of zeros appended to its right to form y, result in n after the operation x + y. For each test case, you should output the count of valid x values followed by the values themselves in ascending order, or 0 if no such x exists. 
Problem Breakdown
Original Number (x): Vadim's secret number.
Appended Zeros (y): A number formed by taking x and adding a positive number of zeros to its right.
Result (n): The final number, n = x + y. 
How to Solve
The core idea is to reverse the process. If n is the sum x + y, then y must be a multiple of 10 raised to some power (10, 100, 1000, etc.), and x will be n minus that multiple of 10.
You can iterate through possible multiples of 10, starting from 10, and subtract them from n. 
Iterate through powers of 10: Let's consider y = 10, 100, 1000, ... up to n.
Calculate potential x : For each y, calculate x = n - y.
Check conditions:
Positive x : The calculated x must be a positive integer.
Zeroes in y : The number y must consist only of zeros (except for the leading digit, which is the number x itself). For example, if x = 101, and y = 1010 (one zero appended), then x + y = 101 + 1010 = 1111. Here, y has the correct form, and x is positive. If x = 10, and y = 100, then x + y = 10 + 100 = 110. The resulting n is 110, but the original x was 10. However, y does not consist only of zeros after x. Instead, x is multiplied by 10 and added.*/
#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
        cin >> n;
        vector<long long> ans;
        for(int k=1;k<=18;k++){
            long long div=1;
            for(int i=0;i<k;i++)div*=10; 
            div+=1; 
            if(div>n)break; 
            if(n%div==0){
                long long x=n/div;
                ans.push_back(x);
            }
        }
        if(ans.empty()){
            cout<<0<<"\n";
        }else{
            sort(ans.begin(),ans.end());
            cout<<ans.size()<<" ";
            for(auto x:ans)cout<<x<<" ";
            cout<<"\n";
        }
}

int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}