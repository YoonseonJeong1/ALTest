#include<stdio.h>

int main(void)
{
	int num,sum;
	int val_num;
	int i;

	sum = 0;
	for(i=0;i<5; i++)
	{
		scanf("%d",&num);
		sum += num*num;
	}
	val_num = sum%10;
	printf("%d\n",val_num);
}
