#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main()
 {

char c[2];

scanf("%s",c);
//gets(c);
 
char num[]={c[1]};
char letr[]={c[0]};

char * op=num;
int nume = atoi(op);

if((strncmp(letr,"a",1)==0 || strncmp(letr,"h",1)==0) && (nume==1|| nume==8)){
	
	printf("3\n");
}

else if(strncmp(letr,"a",1)!=0 && strncmp(letr,"h",1)!=0 && nume==1){
	
	printf("5\n");
}

else if(strncmp(letr,"a",1)!=0 && strncmp(letr,"h",1)!=0 && nume==8){
	
	printf("5\n");
}
else if((strncmp(letr,"a",1)==0 || strncmp(letr,"h",1)==0) && nume!=1 && nume!=8 ){
	
	printf("5\n");
}
else{
		printf("8\n");
}

	

 	return 0;
 }