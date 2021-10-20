#include<iostream>
#include<cstring>

using namespace std;

char strset[10000][505];
int main(void)
{
	int N,M;
	cin>>N>>M;
	for(int i=0;i<N; i++)
		cin>>strset[i];
	int cnt=0;
	for(int i=0;i<M;i++)
	{
		char buf[502];
		memset(buf,0x0,sizeof(buf));
		cin>>buf;
		for(int j=0;j<N;j++)
		{
			int flag=1;
			for(int k=0; k<strlen(buf); k++)
			{
				if(buf[k] != strset[j][k])
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				if(strlen(buf) != strlen(strset[j]))
					break;
				cnt++;
				break;
			}
		}
	}
	cout<<cnt<<"\n";

	return 0;
}
