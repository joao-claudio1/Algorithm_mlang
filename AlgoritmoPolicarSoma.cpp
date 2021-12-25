#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

  vector<long long int> vet1;
  vector<long long int> vet;
  vector<long long int> kuli;
  
  /* Joao Claudio Soares 14 -12-2021*/
  
bool verifaIgual(vector<long long int> &vet, vector <long long int> &vet1){
	
	sort(vet1.begin(), vet1.end());
	
	for(unsigned int i = 0; i < vet.size(); i++)
	{
	   if(vet[i]!=vet1[i])
	   {
		   return false;
	   }
	}	
	
	return true;
}

int operasonDiCerta(vector<long long int> &vet){
	
	long long int a , b, c; 
	while(true)
	{
	
		for(unsigned int i = 0; i < vet.size(); i++)
		{
			for(unsigned int j = 0; j < vet.size(); j++)
			{
				for(unsigned int k = 0; k < vet.size(); k++)
				{
					a = vet[i], b = vet[j], c = vet[k];
                    vet1.clear();
					vet1.push_back(a);
					vet1.push_back(b);
					vet1.push_back(c);
					vet1.push_back(a+b);
					vet1.push_back(a+c);
					vet1.push_back(c+b);
					vet1.push_back(a+b+c);
					
					kuli.clear();
                    kuli.push_back(a);
					kuli.push_back(b);	
					kuli.push_back(c);	
								
					if(verifaIgual(vet,vet1))
					{
						return 1;
					}
				}
			}
            
			
		}
	}
	
	
}

int main()
{
ios::sync_with_stdio(false);
  cin.tie(0);
  long long int t,a;
  	
  cin >>t;
  
 while(t--)
 {
 	vet.clear();
 	vet1.clear();
	 for(unsigned int i = 0; i < 7; i++)
	 {
		 cin >>a;
		 vet.push_back(a);
	 }
	 int k= operasonDiCerta(vet);
	 
	 if(k == 1)
	 {
		 cout <<kuli[0]<<" "<<kuli[1]<<" "<<kuli[2]<<"\n";
	 }
	
 }  
  
	return 0;
}