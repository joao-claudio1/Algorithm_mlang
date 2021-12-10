bool binarySearch(vector<int> &vet,int b,int es,int di){
	
    if(es > di)
	{
		return false;
	}else
	{
		int mei=(es+di)/2;
		if(vet[mei]==b)
		{
			return true;
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