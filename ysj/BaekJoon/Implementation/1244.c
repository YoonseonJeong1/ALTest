#include<stdio.h>


#define MAN	1
#define WOMEN 2

int swit_num = 0;
char swit[102] = {0,};
// int test[102]= {0,};
void change_status(char *entry)
{
	if((*entry-48) == 0)
		*entry = 48+1;
	else
		*entry = 48;
}
int main(void)
{
	int i;
	int num, gender, pos;
	int cont;
	scanf("%d", &swit_num);
//	fflush(stdin);
	for(i=0; i<swit_num;i++)
		scanf("%c",&swit[i]);
/*	for(i=0; i<swit_num;i++)
		scanf("%d",&test[i]);
	for(i=0; i<swit_num;i++)
		printf("%d",test[i]);
	return 0; */

//	printf("%s\n",swit);
	scanf("%d", &num);
//	printf("%d:num\n",num);
	while(num--)
	{
		scanf("%d %d",&gender, &pos);
		if(gender == MAN)
		{
			for(i=(pos-1); i<swit_num; i=i+pos)
			{
				change_status(&swit[i]);
			}
		}
		else
		{
			cont = 1;
			for(i=1; i<=(swit_num)/2; i++)
			{
//				printf("i-1(%d): i+1(%d)\n",i-1,i+1);
				if(cont == 0)
					break;

				if((pos-1-i) < 0 || (pos-1+i)>=swit_num)	
					break;
				if(swit[pos-1-i] == swit[pos-1+i])
				{
					change_status(&swit[pos-1-i]);
					change_status(&swit[pos-1+i]);
				}
				else
				{
					cont = 0;
				}
			}
			change_status(&swit[pos-1]);
		}
//		printf("debug: step:%d, switch: %s\n",num,swit);
	}
	for(i=1; i<=swit_num; i++)
	{
		printf("%c ",swit[i-1]);
		if(i % 20 == 0)
			printf("\n");
	}
	return 0;
}
