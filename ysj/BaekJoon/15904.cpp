#include<iostream>
#include<cstring>

#define STRUE  "I love UCPC\n"
#define SFALSE "I hate UCPC\n"

using namespace std;

char buf[1005];
char comp[1005];
int main(void)
{
	fgets(buf,1005,stdin);
	int len = strlen(buf);
	buf[len-1]='\0';
	len--;
	
	int cnt=0;
	for(int i=0; i<len; i++)
	{
		if(buf[i]>=65 && buf[i]<=90)
			comp[cnt++]=buf[i];
	}
	if(strcmp(comp,"UCPC") == 0)
		cout<<STRUE;
	else
		cout<<SFALSE;
 return 0;

}
