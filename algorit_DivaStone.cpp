#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
/* João Cláudio Soares*/
#define ll long long int
#define pb(a) push_back(a)

ll faziCalculo(vector<ll> &vet, ll l, ll r, ll k){
	
	sort(vet.begin(),vet.end());
	ll kul=0, soma=0;
	
  	for(unsigned int i = 0; i < vet.size(); i++)
	{
	        if(vet[i]>=l && vet[i]<=r){
	        	
				if(soma+vet[i]>k){
					return kul;
				}else{
					soma+=vet[i];
					kul++;	
				}
			
			}
			
			
	}
	return kul;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);

int t;
ll l,r,n,k,a;
vector<ll> vet;

cin >>t;
while(t--)
{
	vet.clear();
	cin >>n>>l>>r>>k; 
	for(int i = 0; i < n; i++)
	{
		cin >>a;
		vet.pb(a);
	}
	
	cout <<faziCalculo(vet,l,r,k)<<"\n";
}

	return 0;
}
