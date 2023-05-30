#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool comp_i(pair<int, int> a, pair<int, int> b)
{
	return (a.first > b.first);
}
bool comp_p(pair<int, string> a, pair<int, string> b)
{
	return (a.first > b.first);
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
	vector<pair<int, int>> s;
	map<int, string> m;
	map<string, int> sum;
	vector<pair<int, string>> best;

	for(int i = 0; i<genres.size(); i++)
	{
		s.push_back({plays[i],i});
		m.insert({i,genres[i]});

		if(sum.find(genres[i]) != sum.end())
			sum[genres[i]]+=plays[i];
		else
			sum.insert({genres[i],plays[i]});
	}
	map<string, int>::iterator iter;
	for(iter = sum.begin(); iter != sum.end(); iter++)
	{
		best.push_back({iter->second,iter->first});
	}
	sort(s.begin(), s.end(), comp_i);
	sort(best.begin(), best.end(), comp_p);

	int tw_count;
	for(int i = 0; i < best.size(); i++)
	{
		tw_count = 0;
		for(int j = 0; j < s.size(); j++)
		{
			if(tw_count == 2)
				break;
			if(m[s[j].second] != best[i].second)
				continue;

			answer.push_back(s[j].second);
			tw_count++;
		}
	}

    return answer;
}

int main(void)
{
	vector<string> g;
	vector<int> p;
	setbuf(stdout, NULL);
	g.push_back("classic");
	g.push_back("pop");
	g.push_back("classic");
	g.push_back("classic");
	g.push_back("pop");
	p.push_back(500);
	p.push_back(600);
	p.push_back(150);
	p.push_back(800);
	p.push_back(2500);
	cout<<"start"<<"\n";
	solution(g,p);

	return 0;
}
