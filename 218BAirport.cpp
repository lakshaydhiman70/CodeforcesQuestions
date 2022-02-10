#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	vector<int>a,b;
	for(int i=0;i<m;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	b=a;
	sort(a.begin(),a.end(),greater<int>());
	int mx=0,mn=0,dupn=n,i=0;
	while(dupn--){
		mx+=a[i];
		a[0]--;
		sort(a.begin(),a.end(),greater<int>());
	}
	sort(b.begin(),b.end());
	while(n--){
		for(int i=0;i<m;i++){
			if(b[i]!=0){
				mn+=b[i];
				b[i]--;
				break;
			}
		}
		sort(b.begin(),b.end());
	}
	cout<<mx<<" "<<mn;
}
