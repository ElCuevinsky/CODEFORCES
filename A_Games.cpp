#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cont=0;
    vector<int> local(n), visit(n);
    for(int i=0;i<n;i++){
        cin>>local[i]>>visit[i];
        for(int j=0;j<i;j++) {
            if(local[i]==visit[j]){
                cont++;
            }
            if(visit[i]==local[j]){
                cont++;
            }
        }
    }
    cout<<cont<<endl;
    return 0;
}
