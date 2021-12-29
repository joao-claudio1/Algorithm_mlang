#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

/*João Cláudio V.Soares*/
long long int berifica(long long int n, vector<vector<long long int>> query){
	
	vector<long long int>ve(n,0);
		long long int a,b,k,max=0;
       
	

		for(long long j=0; j<query.size(); j++)
	{
		
	 
          a = query[j][0];	       
	      b =query[j][1];
	      k =query[j][2];
	      
	      for(long long int i = a; i <= b ; i++)
		  {
			  ve[i-1]+=k;
			  if(ve[i-1] > max)
			  {
				  max = ve[i-1];
			  } 
		  }
    
	       
	}
	
     cout <<max<<endl;
	

return 0;
}


int main()
{
ios::sync_with_stdio(false);
  cin.tie(0);
 long long int n,m,a,b,k,max=0, auxA=0, auxB=0;
 vector<long long int>vet;
 vector<vector<long long int>> query;
 cin >>n>>m;
 while(m--)
 {
 	cin >>a>>b>>k;
 	vet.push_back(a);
    vet.push_back(b);
 	vet.push_back(k);
 	#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;


long long int berifica(long long int n, vector<vector<long long int>> query){
	
	vector<long long int>ve(n,0);
		long long int a,b,k,max=0;
       
	

		for(long long j=0; j<query.size(); j++)
	{
		
	 
          a = query[j][0];	       
	      b =query[j][1];
	      k =query[j][2];
	      
	      for(long long int i = a; i <= b ; i++)
		  {
			  ve[i-1]+=k;
			  if(ve[i-1] > max)
			  {
				  max = ve[i-1];
			  } 
		  }
    
	       
	}
	
     cout <<max<<endl;
	

return 0;
}


int main()
{
ios::sync_with_stdio(false);
  cin.tie(0);
 long long int n,m,a,b,k;
 vector<long long int>vet;
 vector<vector<long long int>> query;
 cin >>n>>m;
 while(m--)
 {
 	cin >>a>>b>>k;
 	vet.push_back(a);
    vet.push_back(b);
 	vet.push_back(k);
 	
    query.push_back(vet);
    vet.clear();
 }
  berifica(n,query);	
	return 0;
}