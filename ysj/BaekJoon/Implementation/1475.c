#include<stdio.h>
#include<string.h>

int num[10]={0,};
char buf[1000002];

int main(void)
{
	int i;
	int len;
    int sum;
	int max=0;

	scanf("%s", buf);
	
	len = strlen(buf);
	for(i=0; i<len; i++)
	{
		num[buf[i]-48]++;
	}

	sum = num[6]+num[9];
	if(sum % 2 == 0)
		sum = sum/2;
	else
		sum = sum/2+1;

	num[6]=0;
	num[9]=0;
	for(i=0; i<9; i++)
	{
		if(num[i]>max)
			max = num[i];
	}

	if(max < sum)
		max = sum;

	printf("%d\n",max);

	return 0;
}
