#include<iostream>
#include<map>
using namespace std;


int main(void)
{
	int N,M;
	string buf;
	map<string, int> m;
	int ans = 0;
	int i;
	cin>>N>>M;
	for(i=0;i<N;i++)
	{
		cin>>buf;
		m.insert({buf,i});
		buf.clear();
	}

	for(i=0;i<M;i++)
	{
		cin>>buf;
		if(m.find(buf) != m.end())
			ans++;
		buf.clear();
	}
	printf("%d\n",ans);

	return 0;
}
