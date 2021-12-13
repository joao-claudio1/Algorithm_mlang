#include <stdio.h>

	int k=1;
int sorting(int n){
	
	int vet[n],i,j;
	for( i = 0; i < n; i++)
	{
		scanf("%d",&vet[i]);
			
	}
int a,b,u=0;
	for(i = 0; i < n; i++)
	{
	   	for(j = 0; j < n; j++)
	   {
	   	if(vet[i]%2!=0)
		   {
			   u=0;
		   }
	   	
	   	    b=vet[i];	   
			a=vet[j];
	   	 	   	 
          if((vet[j] < vet[i]) && (vet[j]%2!=0) && (vet[i]%2!=0) && i<j)
		  {
		     vet[i]=a;	   
			 vet[j]=b;	
			  //printf("%d %d\n",a,b);	
			 //swap(vet[i],vet[j]);
			 i=0;
			u++;
		  }
		  
		   else if((vet[i]<vet[j]) && (vet[i]%2==0) && (vet[j]%2==0) && i<j)
		  {
		     vet[i]=a;	   
			 vet[j]=b;
			 	
		  }
		  
	   }
	   
	   if(u==0)
	   {
		   break;
	   }	
	}

	//cout <<"Case #"<<k<<": ";
	
	printf("Case #%d: ",k);
	for(i = 0; i < n; i++)
	{
	//	cout <<vet[i]<<" "; 
	
	printf("%d ",vet[i]);
	}
	k++;
	
}

int main()
{
	
	int t;
	
	scanf("%d",&t);
	int n;
	while(t--)
	{
	  scanf("%d",&n);
	  
	   sorting(n);
	}
	
	return 0;
}
