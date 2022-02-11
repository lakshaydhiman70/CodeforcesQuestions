#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		if(n==1){
			cout<<a[0]<<"\n";continue;
		}
		long long ct=0;
		for(int i=0;i<n;i++){
			while(a[i]%2==0){
				ct++;
				a[i]/=2;
			}
		}
		long long ans=0;
		sort(a,a+n);
		while(ct--)a[n-1]*=2;
		for(int i=0;i<n;i++)ans+=a[i];
		cout<<ans<<"\n";
	}
}
