#include<stdio.h>

int range_sum(int level, int remain,int step)
{
	long long mul = 1;
	long long minus = 1;
	int i;

	if(step > 5 || remain == 0)
		return 0;

	for(i=1;i<level; i++){
		mul = mul*4;
		minus = minus*5;
	}

	if((remain-minus) >= 0)
	{
		remain = remain - minus;
		if(step == 3)
			return range_sum(level,remain,step+1);
		else
			return (mul+range_sum(level,remain,step+1));
	}
	else
	{
		if(step == 3)
			return 0;
		else
			return range_sum(level-1, remain, 1);
	}
}
int solution(int n, long long l, long long r)
{
	int answer = 0;
	int i;
	int l_level = 0, r_level = 0;
	int l_rmain = l-1, r_rmain = r;
	int a,b;

	if(l == 1 && r == 1)
		return 1;

	for(i=0; i<=n; i++)
	{
		l_rmain = l_rmain/5;
		l_level++;
		if(l_rmain == 0)
			break;
	}
	for(i=0; i<=n; i++)
	{
		r_rmain = r_rmain/5;
		r_level++;
		if(r_rmain == 0)
			break;
	}

	a =  range_sum(r_level, r, 1);
	if(l == 1)
		b = 1;
	else
		b =  range_sum(l_level, l-1, 1);
	answer = a-b;
	return answer;
}
