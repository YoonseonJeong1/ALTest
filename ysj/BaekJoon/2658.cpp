#include<iostream>

using namespace std;

int map[100][100];

struct pt
{
	int x;
	int y;
};

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};


int main(void)
{
	pt point1,point2,point3;

	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			scanf("%1d",&map[i][j]);

    for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
			printf("%d",map[i][j]);
	 printf("\n");
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{


		}
	}

	return 0;
}
