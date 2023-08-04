#include<stdio.h>

int main(void)
{
	int a,b,c;
	int d,e,f;
	int i,j;
	int x,y;

	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

	for(i=-999; i<=999; i++)
	{
		for(j=-999; j<=999; j++)
		{
			if((a*i+b*j == c) && (d*i+e*j == f))
			{
				printf("%d %d\n",i,j);
				return 0;
			}
		}
	}

	return 0;
}
