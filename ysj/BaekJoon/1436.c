#include<stdio.h>


char num[10000000];

int main(void)
{
	int N;
	int i,j,k,n;
	int cnt=0;

	scanf("%d", &N);
	for(i=0;i<=9;i++)
	{
		for(j=0; j<=9;j++)
		{
			for(k=0;k<=9;k++)
			{
				for(n=0;n<=9;n++)
				{
					num[1000000*i+100000*j+10000*k+1000*n+666]='1';
					num[1000000*i+100000*j+10000*k+6660+n]='1';
					num[1000000*i+100000*j+66600+10*k+n]='1';
					num[1000000*i+666000+100*j+10*k+n]='1';
					num[6660000+1000*i+100*j+10*k+n]='1';
				}
			}
		}
	}

	for(i=666; i<10000000;i++)
	{
		if(num[i]=='1')
			cnt++;
		if(cnt == N)
		{
			printf("%d\n",i);
			break;
		}

	}

	return 0;
}
