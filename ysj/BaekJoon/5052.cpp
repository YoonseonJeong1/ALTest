#include<iostream>
#include<cstring>

using namespace std;

char pnum[10001][15];

int main(void)
{

	int test_case;
	int num;
	cin>>test_case;
	while(test_case--)
	{
		cin>>num;
		memset(pnum,0,sizeof(pnum));
		int flag=1;

		for(int k=0;k<num;k++)
			cin>>pnum[k];

		for(int i=0;i<num;i++)
		{
			for(int j=0; j<i; j++)
			{
				int len = strlen(pnum[j]);
				if(strncmp(pnum[j],pnum[i],len) == 0)
				{
					flag = 0;
					break;
				}
			}
			if(!flag)
				break;
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}

	return 0;
}
