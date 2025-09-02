#include <bits/stdc++.h>
using namespace std;
int main(){
string s="";
int t;
cin>>t;
	while(t--){
	cin>>s;	
	if(s.size()>=2){
		//se pone la i
		s[s.size()-2]='i';
		//se quita la ultima letra
		s.erase(s.size()-1);
	}
	cout<<s<<endl;
	}
}