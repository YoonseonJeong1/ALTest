#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse_string(char *str, int length)
{
	int i;
	char a;

	for(i=0;i<(length/2);i++)
	{
		a=str[i];
		str[i]=str[length-1-i];
		str[length-1-i]=a;
	}
}
int main(void)
{
	char add1[10001];
	char add2[10001];
	char ans[20000];
	int len,len1,len2;
	int slen,llen;
	int i;

//48 49 50 51 52 53 54 55 56 57
// 0  1  2  3  4  5  6 7  8   9
	
	scanf("%s %s", add1, add2);
	len1 = strlen(add1);
	len2 = strlen(add2);
	char cnum;

	reverse_string(add1,len1);
	reverse_string(add2,len2);
//	printf("%s %s\n",add1,add2);
	
	memset(ans,0,sizeof(ans));

	if(len1<len2)
	{
	for(i=0; i<len1;i++)
	{
		if((int)ans[i]>48)
			cnum = add1[i]+add2[i]+1;
		else
			cnum = add1[i]+add2[i];

		if(cnum >=106)
		{
			ans[i]=cnum-58;
			ans[i+1]='1';
		}
		else
		   ans[i]=cnum-48;

//			printf("i:%d %c\n",i,ans[i]);
	}
	for(i=len1; i<len2; i++)
	{
		if((int)ans[i]>48)
			cnum = add2[i]+'1';
		else
			cnum = add2[i]+'0';
		if(cnum >=106)
		{
			ans[i]=cnum-58;
			ans[i+1]='1';
		}
		else
			ans[i]=cnum-48;
	}
	}
	else
	{
	for(i=0; i<len2;i++)
	{
		if((int)ans[i]>48)
			cnum = add1[i]+add2[i]+1;
		else
			cnum = add1[i]+add2[i];

		if(cnum >=106)
		{
			ans[i]=cnum-58;
			ans[i+1]='1';
		}
		else
		   ans[i]=cnum-48;

//			printf("i:%d %c\n",i,ans[i]);
	}

	for(i=len2; i<len1; i++)
	{
		if((int)ans[i]>48)
			cnum = add1[i]+'1';
		else
			cnum = add1[i]+'0';
		if(cnum >=106)
		{
			ans[i]=cnum-58;
			ans[i+1]='1';
		}
		else
			ans[i]=cnum-48;		
	}
	}


	len=strlen(ans);
	reverse_string(ans,len);
	printf("%s\n",ans);

	return 0;
}
