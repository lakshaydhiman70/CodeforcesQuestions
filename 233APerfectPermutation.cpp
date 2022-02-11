#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		vector<int>v(n+1,0);
		v[1]=a;
		v[n]=b;
		int j=2;
		for(int i=n;i>=1;i--){
			if(i!=a && i!=b){
				v[j++]=i;
			}
		}
		int mx=INT_MIN,mn=INT_MAX;
		for(int i=1;i<=n/2;i++){
			mn=min(mn,v[i]);
		}
		for(int i=n/2+1;i<=n;i++){
			mx=max(mx,v[i]);
		}
		if(mn==a && mx==b){
			for(int i=1;i<=n;i++)cout<<v[i]<<" ";
		}else cout<<"-1";
		// for(int i=1;i<=n;i++)cout<<v[i]<<" ";
		cout<<"\n";
	}
}
