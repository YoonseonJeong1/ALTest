#include<iostream>
#include<queue>

using namespace std;


int main(void)
{
	queue<int> q;
	queue<int> ans;
	int N,K;

	cin>>N>>K;

	for(int i=0;i<N;i++)
		q.push(i+1);
	while(q.size()>0)
	{
		int put = 0;
		for(int j=0; j<K-1; j++)
		{
			int num;
			num = q.front();
			q.push(num);
			q.pop();
		}
		put = q.front();
		q.pop();
		ans.push(put);
	}
/*
	while(q.size()>0)
	{
		int remain;
		remain = q.front();
		ans.push(remain);
		q.pop();
	}
*/

	cout<<"<";
	for(int i=0; i<N-1; i++)
	{
		cout<<ans.front()<<", ";
		ans.pop();
	}
	cout<<ans.front();
    cout<<">";	
	return 0;
}

