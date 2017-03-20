#include<stdio.h>
#include<stdlib.h>

	int main(){

int n,m,l=-1,l2;//make n+2,m+2 array

scanf("%d %d",&n,&m);
char ** maz = calloc(n+2,sizeof(*maz));
		while(++l<n+2)maz[l] = calloc(m+2,sizeof(char));

		for(l=1;l<n+1;l++)scanf("%s",maz[l]+1);while(getchar() != '\n');


//fgets(maz[l],m,stdin); --pause

//test
//printf("%d %d %d\n",maz[0],maz[0]+1,maz[1]);
		for(l=0;l<n+2;l++){
		   for(l2=0;l2<m+2;l2++)printf("%d",maz[n][m]);
printf("\n");
				  }
//printf("%c\n",maz[1][1]);
//test


		  }
