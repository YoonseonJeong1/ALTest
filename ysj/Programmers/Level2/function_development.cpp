#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    for(int i=0; i<progresses.size(); i++)
    {
        int remain = 100 - progresses[i];
        int day;
        if(remain < speeds[i])
            day = 1;
        else
        {
            if(remain%speeds[i] ==0)
                day = remain/speeds[i];
            else
                day = (remain/speeds[i])+1;
        }
        q.push(day);
    }
    if(q.empty()){
        answer.push_back(0);
        return answer;
    }
    int pre_time = q.front();
    q.pop();
    int count = 1;
    int idx = 0;
    while(!q.empty())
    {
        int time = q.front();
        q.pop();
        
        if(pre_time >= time)
        {
            count++;
        }else
        {
            pre_time = time;
            answer.push_back(count);
            count = 1;
        }
    }
    answer.push_back(count);
       
    
    return answer;
}
