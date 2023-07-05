#include <string>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;

	int br_time = 0;
    int current_weight = weight;
	int current_time = 0;
	int jump = 0;
    queue<pair<int, int>> br;
    queue<int>truck;
    
    for(int i = 0; i<truck_weights.size(); i++)
        truck.push(truck_weights[i]);

    while(!truck.empty())
    {
		int wt = truck.front();
		
		if(br.size() != 0 && (current_time - br.front().second) == bridge_length)
		{
			current_weight+=br.front().first; 
			br.pop();
		}

		if(wt <= current_weight)
		{
			if(jump != 1)
				current_time++;
			current_weight-=wt;
			br.push({wt,current_time});
			truck.pop();
			jump = 0;
		}
		else
		{
			current_time += (bridge_length-(current_time - br.front().second));
			jump = 1;
		}
	}
	if(br.size() != 0)
		current_time += (bridge_length - (current_time - br.back().second));
	cout<<current_time<<"\n";
	answer = current_time;

    return answer;
}
int main(void)
{
	vector<int> input;
	setbuf(stdout, NULL);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#if 0
	input.push_back(7);
	input.push_back(4);
	input.push_back(5);
	input.push_back(6);
	solution(2,10,input);
#endif
#if 1
	input.push_back(10);
	input.push_back(10);
	input.push_back(10);
	input.push_back(10);
	input.push_back(10);
	input.push_back(10);
	input.push_back(10);
	input.push_back(10);
	input.push_back(10);
	input.push_back(10);
	solution(100,100,input);
#endif
	return 0;
}
/*
 *bridge_length	weight	truck_weights	                   return
 *       2	        10	[7,4,5,6]                               8
 *     100	       100	[10]	                              101
 *     100	       100	[10,10,10,10,10,10,10,10,10,10]       110
 */
