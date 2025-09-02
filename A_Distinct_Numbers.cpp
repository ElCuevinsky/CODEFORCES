#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int>numeros;
    for(int i=0;i<n;i++){
        numeros.insert(arr[i]);
    }
    cout<<numeros.size();
    return 0;
}
