#include<iostream>
#include<cstring>

using namespace std;

char room[101][101];

int main(void)
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
		cin>>room[i];

//	cout<<"**********"<<"\n";
//	for(int i=0;i<N;i++)
//		cout<<room[i]<<"\n";

	int ver=0,hor=0; //horizon, vertical

	for(int i=0; i<N; i++)
	{
		for(int j=0;j<N-1;j++)
		{
			if(strncmp(room[i]+j,"..",2) == 0)
			{
				hor++;
				break;
			}
			
		}
		
		for(int k=0; k<N-1;k++)
		{
			if(room[k][i]=='.' && room[k+1][i]=='.')
			{
				ver++;
				break;
			}
		}
	
	}

	cout<<hor<<" "<<ver<<"\n";

	return 0;
}
