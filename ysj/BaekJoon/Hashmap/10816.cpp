#include<iostream>
#include<unordered_map>

using namespace std;

unordered_map<int, int> card;
int main(void)
{

	int N,M;
	int ret;
	
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	cin>>N;
	while(N--)
	{
		int num;
		cin>>num;
		unordered_map<int, int>::iterator iter;
		iter = card.find(num);
		if(iter != card.end())
		{
			iter->second++;
		}
		else
		 card.insert({num,1});
	}
	cin>>M;
	while(M--)
	{
		int temp;
		cin>>temp;
		unordered_map<int,int>::iterator it;
		it = card.find(temp);
		if(it != card.end())
			cout<<it->second<<"\n";
		else
			cout<<"0"<<"\n";
	}


	return 0;
}
