#include<iostream>

using namespace std;

int dy[4]={0,0,-1,1};
int dx[4]={1,-1,0,0};

struct mal
{
	int y;
	int x;
	int dir;
};
int N,K;

struct mal Mal[11];

int map[13][13][11]={0,};
int MoveMal(struct mal *move);
int main(void)
{
	cin>>N>>K;
	for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++)
			cin>>map[i][j][0];

	for(int i=1;i<=K;i++)
		cin>>Mal[i].y>>Mal[i].x>>Mal[i].dir;

	int turn=0;
	int flag=1;
	while(flag)
	{
	    turn++;
		for(int i=1;i<=K;i++)
		{
			flag=MoveMal(&Mal[i]);
			if(!flag)  
			  break;
		}
	}
	printf("%d\n",flag);
}

int MoveMal(struct mal *move)
{
	int stack = 0;
	while(map[move->x][move->y][stack] != 0)
	{
		stack++;
	}
	switch(move->dir)
	{
		case 1:
		break;
		case 2:
		break;
		case 3:
		break;
		case 4:
		break;
	}



}



