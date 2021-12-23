#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

/* feito por João Cláudio Soares*/

vector<string>v;

vector<string> verifica(vector<string>&vet){
	
	for(int i = 0; i < vet.size(); i++)
	{
		string a = vet[i]; 
		string b = vet[i]; 
		
		 sort(a.begin(), a.end());
		
		if(a < b)
		{
			v.push_back("Yes");
		}else{
			
			v.push_back("No");
		}
		
	}
	
	return v;
	
}

int main()
{
	 ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	
	long long int n;
	string s;
    vector<string> vet;  
	cin >>n;
	
	while(n--)
	{
		cin >>s;
		vet.push_back(s);
	}
	verifica(vet);
	for(int i = 0; i < v.size(); i++)
	{
		cout <<v[i]<<"\n";
	}
	
	
	return 0;
}