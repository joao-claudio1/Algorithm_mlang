#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<cstring>
using namespace std;

#define ll long long
#define ld long double
#define ar array

/*Feito por João Claduio Soares 12-12-2021*/

vector<string> vet={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
;


int indexArr(char a){
	
	for(unsigned int i = 0; i < vet.size(); i++)
	{
		string h=vet[i];
		string s{a};
		if(h==s)
		{
			return i;
		}
	}
	
return 0;	
}

int segBusca(string in, string fin){
	
	int con = 0;
	for(int i = indexArr(in[0]); i < vet.size(); i++)
	{
		
		if(vet[i]!=fin)
		{
		   con++;	
		}else
		{
			return con;
		}
	}
	
	
}
void fazKeli() {
    int soma=0;
  
	string s,b;
	cin >>s>>b;

	
	int re=0,ca,sum, p=s.size();
	for(unsigned i = 0; i < b.size(); i++)
	{ int e=0;
        do{
	     	char f=s[e];
	     	 ca=0,sum=0; 
		 	 for(unsigned int j = indexArr(f); j < vet.size(); j++)
			  {	
			    string v{b[i]};
				if(vet[j]!=v){
				   	ca=ca+1;
				   	
				}else
				  { cout <<f<<" "<<v<<" "<<"ca ="<<ca<<endl;	
				  string r,t;
				       r = vet[j];
				    string d{s[e]};
				    
				  	sum = segBusca(v,d);
				  
				  	if(sum > ca)
					  {
						  soma+=ca;
					  }else
					  {
						  soma+=sum;
					  }
					  
				    break;
					}
				}
				e++;
       }while(p!=e);
		
	}
   cout <<soma<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
     cin >> tc;
 
    for (int t = 1; t <= tc; t++) {
         cout << "Caso #" << t << ": ";
          
		faziKeli();
    }
}
