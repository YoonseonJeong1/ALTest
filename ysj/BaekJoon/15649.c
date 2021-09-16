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
	for(i=1; i<=n; i++)
	{
		if(num[i] == 1)
			continue;
		num[i]=1;
		ans[m]=48+i;
		do_recursion(n,m+1);
		num[i]=0;
		ans[m]=0;
	}
}

int main(void)
{
	scanf("%d %d",&a,&b);
	memset(num,0x0,sizeof(num));
	do_recursion(a,0);

	return 0;
}

