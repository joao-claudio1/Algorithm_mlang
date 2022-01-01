#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
ios::sync_with_stdio(false);
  cin.tie(0);
    
    vector<long long int>v;
    long long int t,a,b;
    
    scanf("%lld",&t);
    // cin >>t;
     
     while(t--)
     {scanf("%lld",&a);
         //cin >>a;
         if (a == 1){
           //  cin >>b;
             scanf("%lld",&b);
             v.push_back(b);
         }
         else if(a == 2){
             //cin >>b;
             scanf("%lld",&b);
             v.erase(remove(v.begin(),v.end(),b), v.end());

         }else{
          
             printf("%lld \n",*min_element(v.begin(), v.end()));
             

         }
     }
    
    return 0;
}