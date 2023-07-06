#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
	stack<pair<int,int>> st;
	unordered_map<int, int> map;
	int ans_arr[100000]={0,};
	int cur_time = 0;

	for(int i = 0; i<prices.size(); i++)
		 map.insert({i,prices[i]});
	for(int i = 0; i<prices.size(); i++)
	{
		cur_time++;
		if(st.empty())
		{
			st.push({i,cur_time});
		}
		else
		{
		if(map[st.top().first] <= prices[i])
		{
			st.push({i,cur_time});
		}
		else
		{
			while(!st.empty())
			{
				if(map[st.top().first] > prices[i])
				{
				ans_arr[st.top().first]= (cur_time-st.top().second);
				st.pop();
				}
				else
					break;
			}
			st.push({i,cur_time});
		}
		}
	}

	while(!st.empty())
	{
		ans_arr[st.top().first]= (cur_time-st.top().second);
		 st.pop();
	}
		
	for(int i = 0; i < prices.size(); i++)
	{
		cout<<ans_arr[i]<<"\n";
		answer.push_back(ans_arr[i]);
	}

    return answer;
}
int main(void)
{
	vector<int> v;
	setbuf(stdout, NULL);
	v.push_back(2);
	v.push_back(2);
	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(3);
	v.push_back(3);
#if 0
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(1);
#endif
	solution(v);


	return 0;
}
