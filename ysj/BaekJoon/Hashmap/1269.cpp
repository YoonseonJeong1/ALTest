#include<iostream>
#include<unordered_map>

using namespace std;

unordered_map<int, int> setA;
unordered_map<int, int> setB;

int main(void)
{
	int a,b;
	int intersect = 0;

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin>>a>>b;
	while(a--)
	{
		int num;
		cin>>num;
		setA.insert(make_pair(num,0));
	}
	while(b--)
	{
		int num;
		cin>>num;
		if(setA.find(num) != setA.end()){
			intersect++;
		}
		setB.insert(make_pair(num,0));
	}
	int sum = setA.size()+setB.size()-(2*intersect);

	cout<<sum<<"\n";

	return 0;
}
