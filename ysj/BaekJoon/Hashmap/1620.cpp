#include<iostream>
#include<unordered_map>
#include<string>
#include<cstring>
using namespace std;

unordered_map<string, int> Map;
string check[100002];
int main(void)
{
	string buf;
	int n,m;
	
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	setbuf(stdout, NULL);
	cin>>n>>m;

	for(int i=1; i<=n; i++){
		cin>>buf;
		check[i] = buf;
		Map.insert({buf,i});
		buf.clear();
	}
	while(m--){
		cin>>buf;
		unordered_map<string,int>::iterator iter = Map.find(buf);
		if(iter != Map.end()){
			cout<<iter->second<<"\n";
		}
		else
		{
			cout<<check[stoi(buf)]<<"\n";
		}
		buf.clear();
	}
// 시간초과 -> iter을 이용해 순회한 element는 삭제함
// runtime error: iter 요소를 삭제해서 순차적으로 순회할 때 null에 접근하나봄..
	return 0;
}
