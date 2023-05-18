#include<iostream>
#include<map>
#include<string>

using namespace std;


map<string,int> m;

int main(void)
{
	int n;
	string name;
	string inout;

	cin>>n;
	while(n--)
	{
		cin>>name>>inout;
		if(inout == "enter")
			m.insert({name, n});
		else
			m.erase(name);
	}

	map<string, int>::iterator iter;

	for(iter = --m.end(); iter != m.begin(); iter--)
		cout<<iter->first<<"\n";
	cout<<iter->first<<"\n";


}
