    #include <bits/stdc++.h>
    using namespace std;

    void solve(){
        int j=0;
        string imput;
        char ouput[3];
        getline(cin,imput);

        ouput[j]=imput[0];
        j++;
        for(int i=1;i<imput.size();i++){
            if(imput[i]==32){
                ouput[j]=imput[i+1];
                j++;
            }
        }
        for(char c:ouput){
            cout<<c;
        }
        cout<<'\n';
    }
    int main(){
        int t;
        cin>>t;
        cin.ignore(); 
        while(t--)solve();
        return 0;
    }