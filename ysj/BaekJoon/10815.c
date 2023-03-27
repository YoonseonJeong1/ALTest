#include<stdio.h>


char positive_num[10000001]={0,};
char negative_num[10000001]={0,};
int list[500000];

int main(void)
{
	int N,M;
	int i;
	int num;
	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		num=0;
		scanf("%d",&num);
		if(num >=0)
			positive_num[num]=1;
		else 
			negative_num[num*-1]=1;
	}
	scanf("%d", &M);
	for(i=0;i<M;i++)
	{
		num=0;
		scanf("%d",&num);
		list[i]=num;
	}
	for(i=0; i<M; i++)
	{
		if(list[i] >=0)
		{
			if(positive_num[list[i]] == 1)
				printf("1 ");
			else
				printf("0 ");
		}
		else
		{
			if(negative_num[list[i]*-1] == 1)
				printf("1 ");
			else
				printf("0 ");
		}
	}
	printf("\n");

	return 0;
}
