#include<iostream>
#include<map>
#include<string>

using namespace std;


map<string, int> name;
map<string, int> ans;
int main(void)
{
	int N,M;
	string buf;
	
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	cin>>N>>M;
		
	while(N--)
	{
		cin>>buf;
		name.insert(make_pair(buf,0));
		buf.clear();
	}
	while(M--)
	{
		cin>>buf;
		if(name.find(buf) != name.end())
			ans.insert({buf,0});
		buf.clear();
	}
	
	map<string, int>::iterator iter;

	cout<<ans.size()<<"\n";
	for(iter = ans.begin(); iter != ans.end(); iter++)
		cout<<iter->first<<"\n";

	return 0;
}
