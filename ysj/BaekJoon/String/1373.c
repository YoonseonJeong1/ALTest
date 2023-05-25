#include<stdio.h>
#include<string.h>

char buf[1000002]={0,};
char result[800001]={0,};
int main(void)
{
	int len = 0;
	int num = 0;
	int digit = 0;
	char swap;
	int i;

	scanf("%s",buf);
	len = strlen(buf);
	while(len >= 3)
	{
		num = ((buf[len-1]-48)+(buf[len-2]-48)*2+(buf[len-3]-48)*4);
		result[digit]=num+48;
		digit++;
		len -= 3;
	}

	if(len == 2)
	{
	    num = ((buf[len-1]-48)+(buf[len-2]-48)*2);
		result[digit] = num+48;
	}
	else if(len == 1)
	{
		num = buf[len-1]-48;
		result[digit] = num+48;
	}
	len = strlen(result);
	if(len > 1)
	{
	for(i=0; i < (len/2); i++)
	{
		swap = result[i];
		result[i]=result[len-1-i];
		result[len-1-i]=swap;
	}
	}
	printf("%s\n",result);

	return 0;
}
