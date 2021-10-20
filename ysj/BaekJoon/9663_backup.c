#include<stdio.h>
#include<string.h>


int map[15][15];
int cnt=0;
int N;
int dy[8]={1,-1,0, 0,1,-1, 1,-1};
int dx[8]={0, 0,1,-1,1,-1,-1, 1};
int queen[15][15];
/*
  1. make permution 
  ex) N = 3 , x = 0,1,2 y = 0,1,2
   -------------> x
|  (0,0) (0,1) (0,2)
|  (1,0) (1,1) (1,2)
|  (2,0) (2,1) (2,2)
v y
  2. backtracking 
  choose (0,0) then (0,1) (0,2) (1,0) (2,0) (1,1) (2,2) X
 */

int check_q_move(int _y, int _x)
{
	int i,j;
	int tx,ty;


   for(j=1; j<N; j++)
   {
	for(i=0; i<8; i++)
	{
		ty=_y+(dy[i]*j);
		tx=_x+(dx[i]*j);
		if(ty == N || ty < 0 || tx == N || tx < 0)
			continue;
		if(queen[ty][tx] == 1)
			return 0;
	}
   }
   return 1;
/*
	  ty=_y, tx=_x;
	  while(1)
	  {
		ty++; 
		if(ty == N)
			break;
		if(map[ty][tx] > 0)
			return 0;
	   }
*/

}

void draw_q_move(int _y, int _x)
{
	int i,j;
	int tx,ty;


   for(j=1; j<N; j++)
   {
	for(i=0; i<8; i++)
	{
		ty=_y+(dy[i]*j);
		tx=_x+(dx[i]*j);
		if(ty == N || ty < 0 || tx == N || tx < 0)
			continue;
		map[ty][tx]++;
	}
   }

}

void erase_q_move(int _y, int _x)
{
   int i,j;
   int tx,ty;
   for(j=1; j<N; j++)
   {
	for(i=0; i<8; i++)
	{
		ty=_y+(dy[i]*j);
		tx=_x+(dx[i]*j);
		if(ty == N || ty < 0 || tx == N || tx < 0)
			continue;
		map[ty][tx]--;
	}
   }
}

void make_dir(int n, int m)
{
	int i;
	int y,x;
	if(m == N)
	{
	  cnt++;
	  return;
	}
	for(i=n; i<N*N;i++)
	{
		y=i/N;
		x=i%N;

		if(map[y][x] >= 1)
			continue;
		if(!check_q_move(y,x))
			continue;
		map[y][x]=1;
		queen[y][x]=1;
		draw_q_move(y,x);
		make_dir(i+1,m+1);
		map[y][x]=0;
		queen[y][x]=0;
		erase_q_move(y,x);
	}
}

int main(void)
{
	scanf("%d",&N);
	memset(map,0x0,sizeof(map));
	memset(queen,0x0,sizeof(queen));
	make_dir(0,0);
	printf("%d\n",cnt);

	return 0;
}
