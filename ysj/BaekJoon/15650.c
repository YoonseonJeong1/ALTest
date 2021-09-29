#include<stdio.h>
#include<string.h>

char num[10];
char ans[10];
int a,b;


/*
   think first 4Combination3(4C3) by loop

   for(i=1; i<5; i++)
   {
   	  for(j=i+1; j<5; j++)
	  {
	  	for(k=j+1; k<5; k++)
		{
			printf("%d %d %d\n",i,j,k);
		}
	  }
   }
   And then change the recursion
 */
void do_recursion(int n, int m)
{
	int i,j;
	if(m == b)
	{
		for(j=0;j < b;j++)
			printf("%c ",ans[j]);
		printf("\n");
		return;
	}
	for(i=n; i<=a; i++)
	{
		ans[m]=48+i;
		do_recursion(i+1,m+1);
	}
}

int main(void)
{
	scanf("%d %d",&a,&b);
	memset(num,0x0,sizeof(num));
	do_recursion(1,0);

	return 0;
}

