#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	int rewi(int * x,int * y,int * xx,char ** maz,char * turn);
	int main(){

int n,m,l=-1,l2,l3,l4,rct_x=1,rct_y=1,xx=0;//make n+2,m+2 array
int x[2500],y[2500];
char turn=0;

int temp=0;

x[0]=1;y[0]=1;
scanf("%d %d",&n,&m);
char ** maz = (char **)malloc(sizeof(char *)*n+2);
		while(++l<n+2)maz[l] = (char *)malloc(sizeof(char)*m+2);
		for(l=1;l<n+1;l++)scanf("%s",maz[l]+1);while(getchar() != '\n');

//proto
		while(1){printf("rct_x: %d rct_y: %d x[xx]: %d y[xx]: %d\n",rct_x,rct_y,x[xx],y[xx]);

scanf("%d",&temp);
if(temp == 1)return 0;
		if(turn == 0)for(l3=1;l3<n+1;l3++){for(l4=1;l4<m+1;l4++)if(maz[l3][l4] != 0)
{turn = maz[l3][l4];rct_x=l3;rct_y=l4;maz[rct_x][rct_y]+=32;break;}if(turn != 0)break;}
//pause here here!!!
		else if(((xx==0)?(1):(x[xx-1] != rct_x + 1)) && (maz[rct_x + 1][rct_y] != 0) && ((maz[rct_x + 1][rct_y] == turn) || (maz[rct_x + 1][rct_y] == turn+32)))
{
printf("CHK\n");
		if(maz[rct_x + 1][rct_y] == (turn+32)){printf("Yes\n");break;}
xx++;x[xx]=rct_x+1;y[xx]=rct_y;	
 maz[rct_x+1][rct_y]+=32; rct_x=rct_x+1;rct_y=rct_y;
}
//pause
		else if(((xx==0)?(1):(x[xx-1] != rct_x - 1)) && (maz[rct_x - 1][rct_y] != 0) && ((maz[rct_x - 1][rct_y] == turn) || (maz[rct_x - 1][rct_y] == turn+32)))
{
printf("CHK1\n");
printf("CHK1\n");
		if(maz[rct_x - 1][rct_y] == turn+32){printf("Yes\n");break;}
xx++;x[xx]=rct_x-1;y[xx]=rct_y; 
 maz[rct_x-1][rct_y]+=32; rct_x=rct_x-1;rct_y=rct_y;
}
//pause	
		else if(((xx==0)?(1):(y[xx-1] != rct_y + 1)) && (maz[rct_x][rct_y + 1] != 0) && ((maz[rct_x][rct_y + 1] == turn) || (maz[rct_x][rct_y + 1] == turn+32)))
{
printf("CHK2\n");
		if(maz[rct_x][rct_y + 1] == turn+32){printf("Yes\n");break;}
xx++;x[xx]=rct_x;y[xx]=rct_y+1; 
 maz[rct_x][rct_y+1]+=32; rct_x=rct_x;rct_y=rct_y+1;
}
//pause
		else if((y[xx-1] != rct_y - 1) && (maz[rct_x][rct_y - 1] != 0) && ((maz[rct_x][rct_y - 1] == turn) || (maz[rct_x][rct_y - 1] == turn+32)))
{
printf("CHK3\n");
		if(maz[rct_x][rct_y - 1] == turn+32){printf("Yes\n");break;}
xx++;x[xx]=rct_x;y[xx]=rct_y-1; 
 maz[rct_x][rct_y-1]+=32; rct_x=rct_x;rct_y=rct_y-1;
}
		else{rewi(x,y,&xx,maz,&turn);}
//pause
for(l2=0;l2<n+1;l2++)for(l3=0;l3<m+1;l3++){printf("%c",maz[l2][l3]);}
printf("\n");
		}
return 0;
		  }
	int rewi(int * x,int * y,int * xx,char ** maz,char * turn){
int a=0,b=0;
		while(1){
a=x[*xx];
b=y[*xx];
if( ((maz[a+1][b] == *turn)||(maz[a-1][b] == *turn)||(maz[a][b+1] == *turn)||(maz[a][b-1] == *turn))){return 0;}

maz[a][b]=0;x[*xx]=0;y[*xx]=0;
if(*xx == 0){*turn = 0;return 0;}
*xx--;
			}
								   }
