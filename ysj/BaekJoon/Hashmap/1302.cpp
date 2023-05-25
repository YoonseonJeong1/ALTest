#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(void)
{
	int N;
	map<string, int> maps;
	map<string, int> bests;
	string book_name;
	
	cin>>N;
	while(N--)
	{
		cin>>book_name;
		if(maps.find(book_name) != maps.end())
			maps[book_name]++;
		else
			maps.insert({book_name,1});
		book_name.clear();
	}
	map<string, int>::iterator iter;
	int max = 0;
	for(iter = maps.begin(); iter != maps.end(); iter++)
	{
		if(iter->second >= max)
			max = iter->second;
	}
	for(iter = maps.begin(); iter != maps.end(); iter++)
	{
		if(iter->second == max)
			bests.insert({iter->first,iter->second});
	}
	iter = bests.begin();
	cout<<iter->first<<"\n";

	return 0;
}
