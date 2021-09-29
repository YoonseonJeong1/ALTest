#include<stdio.h>
#include<string.h>

char num[10];
char ans[10];
int a,b;


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
		do_recursion(i,m+1);
	}
}

int main(void)
{
	scanf("%d %d",&a,&b);
	memset(num,0x0,sizeof(num));
	do_recursion(1,0);

	return 0;
}

