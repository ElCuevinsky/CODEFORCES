#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<string>pasao; 
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(pasao.count(s)){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
            pasao.insert(s);
        }
    }
    return 0;
}