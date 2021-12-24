#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

/*Feito por João Claudio Soares*/

int binarySearch(vector<long long int> &vet,int b,int es,int di){
	
    if(es > di)
	{
		return -1;
	}else
	{
		int mei=(es+di)/2;
		if(vet[mei]==b)
		{
			return mei;
		}else
		{
			if(vet[mei] < b)
			{
				es =mei+1;
			}else
			{
				di = mei-1;
			 
			}
			
		}
			binarySearch(vet, b, es, di);
	}	
}


long long int berificaEl(long long int n){
	
long long int kt =0 , kq = 1, kc = 1, conta=1;


  vector<long long int> vet;


	for(long long int i = 1; i <= 1000 ; i++)
	{
	        vet.push_back(i*i);
	        
	}
	
    for(long long int i = 2; i <= 1000 ; i++)
	{
	        vet.push_back(i*i*i);
	}

	sort(vet.begin(), vet.end());
  vector< long long int>::iterator it = lower_bound(vet.begin(), vet.end(),n);	
  
  int a = binarySearch(vet,*it , 0, (vet.size())-1);	
		return a;
		
}

 main()
{
ios::sync_with_stdio(false);
  cin.tie(0);
  
 long long int t, n;
 
 cin >>t;
 while(t--)
 {
 	cin >>n;
 
    cout <<berificaEl(n)<<"\n";	 
 }
	return 0;
}