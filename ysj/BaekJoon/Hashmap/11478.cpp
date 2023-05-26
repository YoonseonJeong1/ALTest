#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;
unordered_map<string, int> set;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin>>str;

	for(int i=0; i<str.size();i++)
	{
		int size = i+1;
		for(int j=0; j<str.size();j++)
		{
			string sub;
			if((j+size)>str.size())
				continue;
			sub = str.substr(j,size);
//			cout<<sub<<"\n";
			set.insert({sub,0});
		}
	}
	cout<<set.size()<<"\n";

	return 0;
}
