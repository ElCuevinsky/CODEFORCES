    #include<bits/stdc++.h>
    using namespace std;
    void solve(){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>A(n,vector<int>(m));
        for(int i=0;i<n;i++){
            string row;
            cin>>row;
            for(int j=0;j<m;j++){
                A[i][j]=row[j]-'0';
            }
        }

        int ROdd=0;
        for(int i=0;i<n;i++){
            int RSum=0;
            for(int   j=0;j<m;j++){
                RSum+=A[i][j];
            }
            if(RSum%2!=0){
            ROdd++;
            }
        }

        int COdd=0;
        for(int j=0;j<m;j++){
            int  CSum=0;
            for(int i=0;i<n;i++){
            CSum+=A[i][j];
            }
            if(CSum%2!=0){
            COdd++;
            }
        }

        cout<<max(ROdd,COdd)<<endl;
    }

    int main(){
        int t;
        cin>>t;
        while(t--){
        solve();
        }
        return 0;
    }
