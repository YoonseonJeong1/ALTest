#include<stdio.h>
#include<string.h>

char stset[10000][505];
char key[10000];
int main(void)
{
	int N,M;
	int i,j,cnt;
	char buf[502];
	scanf("%d %d",&N,&M);

	for(i=0;i<N; i++)
	{
		scanf("%s",stset[i]);
		key[i]=stset[i][0];
	}
	cnt=0;

	/* aa bb cc dd
	 * ac ef df cc ccc
	 */
	for(i=0;i<M;i++)
	{
		memset(buf,0x0,sizeof(buf));
		scanf("%s",buf);
		for(j=0;j<N;j++)
		{
		if( (strlen(buf) != strlen(stset[j])) && buf[0] !=key[j])
			continue;
		if(strcmp(buf,stset[j]) == 0){
			cnt++;
			break;
		}
		}
	}
	printf("%d\n",cnt);
	return 0;
}
