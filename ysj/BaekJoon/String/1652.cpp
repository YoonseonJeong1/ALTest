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
	int hcont = 0, vcont = 0; //horizontal continue, vertical continue
	
	for(int i=0; i<N; i++)
	{
		hcont = 0;
		for(int j=0;j<N-1;j++)
		{
			if(strncmp(room[i]+j,"..",2) == 0)
			{
				if(!hcont){
					hor++;
					hcont = 1;
				}
			}
			else
				hcont = 0;
		}
	
		vcont = 0;
		for(int k=0; k<N-1;k++)
		{
			if(room[k][i]=='.' && room[k+1][i]=='.')
			{
				if(!vcont){
				ver++;
				vcont = 1;
				}
			}
			else
				vcont = 0;
		}
	
	}

	cout<<hor<<" "<<ver<<"\n";

	return 0;
}
