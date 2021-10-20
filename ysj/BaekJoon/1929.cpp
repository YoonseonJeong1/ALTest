#include<iostream>
using namespace std;

#define MAX_NUM	1000001

int num[MAX_NUM]={0,};


int main(void)
{
	int M,N;

	cin>>M>>N;
	
	if(M == 1 && N != 1)
		M++;

	for(int i=M;i<=N;i++)
	{
		if(i%2 == 0)
		{
			if(i == 2)
				continue;
			num[i]=1;
		}
		else if(i%3 == 0)
		{
			if(i == 3)
				continue;
			num[i]=1;
		}
		else if(i%5 == 0)
		{
			if(i == 5)
				continue;
			num[i]=1;
		}
		else if(i%7 == 0)
		{
			if(i == 7)
				continue;
			num[i]=1;
		}
	}	
	for(int i=M;i<= N;i++)
	   if(num[i] == 0)
			cout<<i<<"\n";
	return 0;
}
