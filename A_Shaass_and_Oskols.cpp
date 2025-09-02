#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,a[102],x,y;//n: numero de cables,m:numero d disparos, a: vector con los pajeros, x: cable, y: disparo
	cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];//se llena el cable de pajeros
		}
		cin>>m;// se piden los disparos
		while(m--){
			cin>>x>>y; //se pide cable y posicion
			a[x-1]+=(y-1);
			a[x+1]+=(a[x]-y);//se calculan los movimientos de los pajeros
			a[x]=0;
		}
		for(int i=1;i<=n;i++){
			cout<<a[i]<<endl;//se imprimen los pajeros restantes 
		}
		return 0;
}