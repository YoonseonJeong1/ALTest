#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(void)
{
	vector<long> bs; //binarysearch
	int n,m;

	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	cin>>n;
	for(int i = 0; i<n; i++)
	{
		long input;
		cin>>input;
		bs.push_back(input);
	}
	sort(bs.begin(), bs.end());

	cin>>m;
	for(int i = 0; i < m; i++)
	{
		long check;
		cin>>check;
		if(binary_search(bs.begin(), bs.end(), check))
			cout<<"1"<<"\n";
		else
			cout<<"0"<<"\n";
	}

	return 0;
}
