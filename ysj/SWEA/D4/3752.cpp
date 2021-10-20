#include<iostream>
#include<cstring>
#define MAX_NUM 105
#define INIT 0
#define MAX_SCORE 1000002
using namespace std;

int num[MAX_NUM];
int visit[MAX_NUM];
char pick[MAX_SCORE];
int cnt;
int N;
void DFS(int step, int cur);
int main(int argc, char** argv)
{
	int test_case;
	int T;
    setbuf(stdout, NULL);
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin>>N;
        memset(pick,INIT,sizeof(pick));
        cnt=INIT;
	
        for(int i=INIT;i<N;i++)
            cin>>num[i];
		pick[INIT]=true;
		cnt++;
		for(int i=INIT;i<N;i++)		
		{
			memset(visit,INIT,sizeof(visit));
			visit[i]=true;
			if(!pick[num[i]])
			{	
				pick[num[i]]=true;
//				cout<<num[i]<<" ";
				cnt++;
			}
			DFS(INIT+1,num[i]);
			visit[i]=false;	
		}

        cout<<"#"<<test_case<<" "<<cnt<<"\n";
	}
	return INIT;
}

void DFS(int step, int cur)
{
	
	for(int i=0;i<N;i++)
	{
		int sum=cur+num[i];
		if(visit[i] == 0 && pick[sum] == 0)
		{
			visit[i]=true;
			pick[sum]=true;
//			cout<<"sum:"<<sum<<" ";
//			cout<<"[step: "<<step<<"]"<<"\n";
//			for(int k=0;k<N;k++)
//			{
//				cout<<visit[k]<<" ";
//			}
//			cout<<"\n";
			cnt++;
			DFS(step+1,sum);
			visit[i]=false;
		}
	}

}
