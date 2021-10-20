#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>


using namespace std;

char str[1001][1001];

int main(void)
{
	
	cin>>str[0];
	int len = strlen(str[0]);

	for(int i=1; i<len; i++)
	{
		strcat(str[i],str[0]+i);
//		cout<<i<<" "<<str[i]<<"\n";
	}
	for(int i=0; i<len; i++)
	{
		int index=i;
		for(int j=i+1; j<len; j++)
		{
			cout<<str[j]<<"\n";
			if(strcmp(str[index],str[j])<0)
				index=j;
		}
		cout<<(str[index])<<"\n";
	}

//	sort(str[0],str[0]+(len-1));
//	cout<<"0"<<str[0]<<"\n";

//	for(int i=0; i<len; i++)
//		cout<<str[i]<<"\n";

	return 0;
}
