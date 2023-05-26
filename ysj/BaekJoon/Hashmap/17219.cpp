#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	string site,pw;
	unordered_map<string, string>maps;

	cin>>n>>m;
	for(int i = 0; i < n; i++)
	{
		cin>>site>>pw;
		maps.insert({site,pw});
		site.clear();
		site.clear();
	}

	for(int i = 0 ; i < m; i++)
	{
		cin>>site;
		cout<<maps[site]<<"\n";
		site.clear();
	}


	return 0;
	
}

