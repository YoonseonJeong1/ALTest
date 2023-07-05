#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int br_time = 0;
    int current_weight = weight;
    queue<int> br;
    queue<int> truck;
    
    for(int i = 0; i<truck_weights.size(); i++)
        truck.push(truck_weights[i]);
    
    while(!truck.empty())
    {
      
       int wt = truck.front();
        
       if(br.size() == bridge_length)
       {
           current_weight += br.front();
           br.pop();
           br_time--;
       }
       if(br_time == bridge_length && br.size() != 0)
       {
           current_weight += br.front();
           br.pop();
           br_time = 0;
       }
       if(wt <= current_weight)
       {
           current_weight-=wt;
           br.push(wt);
           truck.pop();
       }
       else
       {
           answer+=(bridge_length-br_time);
           br_time = bridge_length;
           continue;
       }
            
       answer++;
       br_time++;
    }
    
    if(!br.empty())
    {
       answer+=(bridge_length + br_time - br.size());
    }
  
    return answer;
}
