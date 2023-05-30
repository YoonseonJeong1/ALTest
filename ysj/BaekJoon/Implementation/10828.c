#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int push(int data);
int empty(void);
int pop(void);
int size(void);
int top(void);

int idx = 0;
int length = 0;
int memory[10005];

int main(void)
{
	int num;
	char cmd[100];
	int data;
	char *ptr;
	setbuf(stdout,NULL);
	scanf("%d",&num);
	getchar();

	while(num--)
	{
		memset(cmd,0x0,100);
		data = 0;

		fgets(cmd,100,stdin);
		cmd[strlen(cmd)-1]='\0';
		if(strncmp(cmd,"push",4) == 0){
			ptr = strchr(cmd, ' ');
			data = atoi(ptr);
			push(data);
		}
		else if(strncmp(cmd,"size",4) == 0){
			printf("%d\n",size());
		}
		else if(strncmp(cmd,"top",3) == 0){
			printf("%d\n",top());
		}
		else if(strncmp(cmd,"empty",5) == 0){
			printf("%d\n",empty());
		}
		else if(strncmp(cmd,"pop",3) == 0){
			printf("%d\n",pop());
		}
	}
	return 0;
}
int push(int data)
{
	memory[idx++]=data;
	length++;
}
int empty(void)
{
	return (length==0);
}
int pop(void)
{
	if(empty())
		return -1;
	length--;
	return memory[--idx];
}

int size(void)
{
	return length;
}

int top(void)
{
	if(!empty())
		return memory[idx-1];
	else
		return -1;
}


