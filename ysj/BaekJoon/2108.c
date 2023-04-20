#include<stdio.h>
#include<stdlib.h>

int m[8002]={0,};
int *arr;


int compare(const void *a, const void *b) {
    if(*(int*)a > *(int*)b) {
        return 1;
    }
    else if(*(int*)a < *(int*)b) {
        return -1;
    }
    else {
        return 0;
    }
}
int main(void)
{
	int num;
	float mean;
	int mid,mode,ran;
	int min,max;
	int N,i,j;
	int real_N;
	int unique, second;
	int trans;

	scanf("%d",&N);
	arr = (int *)malloc(sizeof(int)*N);
	mean = 0;

	for(i=0; i<N; i++)
	{
		scanf("%d",&arr[i]);
		mean+=arr[i];
		if(arr[i]< 0)
			m[4000+(arr[i]*-1)]++;
		else
			m[arr[i]]++;
	}

	/* mean */
	mean = mean/N;
	if(mean>=0)
	{
	if(mean - (int)mean >= 0.5)
		mean+=1;
	}
	else
	{
		if((mean-(int)mean)*-1 >= 0.5)
			mean+=-1;
	}
	qsort(arr,N, sizeof(int),compare);
	ran = arr[N-1]-arr[0];
	mid = arr[N/2];
	/* ran 
	min = 4001;
	max = 0;
	for(i=8000; i>=4000; i--)
	{
		if(m[i] == 0)
			continue;
		trans = (i-4000)*-1;
		if(trans >= max)
			max = trans;
		if(trans <= min)
			min = trans;
	}
	for(i=0; i<4001; i++)
	{
		if(m[i] == 0)
			continue;
		if(i >= max)
			max = i;
		if(i <= min)
			min = i;
	}
	ran = max-min;
    */
	/* mid */


	/* mode */
	max = 0;
	for(i=0; i< 8001; i++)
	{
		if(m[i] >= max)
		{
			max = m[i];
			if(i < 4001)
				mode = i;
			else
				mode = (i-4000)*-1;
		}
	}

	unique = 1;
	for(i=0; i < 8001; i++)
	{
		if(m[i] == max)
		{
			unique = 0;
			break;
		}
	}
	if(!unique)
	{
		second = 0;
		for(j=8000; j>=4001;j--)
		{
			if(m[j] != max)
				continue;
			else
			{
				second++;
				if(second == 2)
				{						
					mode = (j-4000)*-1;
					break;
				}
			}		
		}
		for(j=0; j<=4000; j++)
		{
			if(m[j] != max)
				continue;
			else
			{
				second++;
				if(second > 2)
					break;
				else if(second == 2)
				{
					mode = j;
					break;
				}
			}
		}
	}

	printf("%d\n%d\n%d\n%d\n",(int)mean,mid,mode,ran);
	free(arr);
	return 0;
}	
