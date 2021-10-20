#include<iostream>

using namespace std;

struct MAL
{
	int y;
	int x;
	int dir;
	int stack_num;
};

int N,K;
int chess[13][13][5]; //zero : color of block, first~fourth: stack of mal
struct MAL mal[13];

int main(void)
{
	cin>>N>>K;

	for(int i=1; i<=N; i++)
		for(int j=1; j<=N; j++)
			cin>>chess[i][j][0];

	for(int i=1; i<=N; i++)
		for(int j=1; j<=N;j++)
			for(int k=1;k<5;k++)
				chess[i][j][k]=0;

	for(int i=1; i<=K; i++)
	{
		cin>>mal[i].y>>mal[i].x>>mal[i].dir;
		mal[i].stack_num=1;
		chess[i][j][1]=1;
	}

	int turn=0;

	while(1)
	{
		turn++;
		for(int i=1; i<=K; i++)
			Movemal(&mal[i]);
		ret = check_num();
		if(ret >=4)
			break;
		
		if(turn >1000 || check_chaos() == 1)
			return -1;
	}
	
	printf("%d\n", ret);
}


void Movemal(struct MAL *mal)
{
	int ny, nx;
	int color;
	ny = mal.y +dy[dir];
	nx = mal.x +dx[dir];
	if(ny < 1 || nx < 1 || ny > N || nx > N)
	{
	  color = BLUE;
	}	
	else
	{
		color = chess[mal.y][mal.x][0];
	}

	if(color == WHITE)
	{
		if(mal.stack_num == 1)
		{
			mal.y=ny;
			mal.x=nx;
			for(int i=1; i<5; i++)
				if(
		}
		else
		{
		for(int i=1; i<=mal.stack_num; i++)
		{

		}
		}
	}
}

